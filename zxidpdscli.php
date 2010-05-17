<?
# zxid/zxidpdscli.php  -  Hello World Personal Data Store Client
#
# Copyright (c) 2010 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
# Copyright (c) 2007-2009 Symlabs (symlabs@symlabs.com), All Rights Reserved.
# Author: Sampo Kellomaki (sampo@iki.fi)
# This is confidential unpublished proprietary source code of the author.
# NO WARRANTY, not even implied warranties. Contains trade secrets.
# Distribution prohibited unless authorized in writing.
# Licensed under Apache License 2.0, see file COPYING.
# $Id: zxidhlo.php,v 1.11 2009-11-29 12:23:06 sampo Exp $
# 14.5.2010,  created --Sampo

dl("php_zxid.so");  # These three lines can go to initialization: they only need to run once
# CONFIG: You must have created /var/zxid directory hierarchy. See `make dir'
# CONFIG: You must edit the URL to match your domain name and port
#$conf = "URL=https://sp1.zxidsp.org:5443/zxidhlo.php&PATH=/var/zxid/";
$conf = "PATH=/var/zxid/&URL=http://sp.tas3.pt:8082/zxidhlo.php";
#error_log("zxidphp: conf($conf)");
$cf = zxid_new_conf_to_cf($conf);
?>
<?
# For every page that is accessed. Debug: QUERY_STRING=o=E REQUEST_METHOD=GET ./zxidhlo.php
#print_r(phpinfo());
#print_r($_SERVER);
$qs = $_SERVER['REQUEST_METHOD'] == 'GET'
      ? $_SERVER['QUERY_STRING']
      : file_get_contents('php://input');
error_log("zxidphp: qs($qs)");
$res = zxid_simple_cf($cf, -1, $qs, null, 0x1814);
error_log("zxidphp: res($res) conf($conf)");

switch (substr($res, 0, 1)) {
case 'L': header($res); exit;  # Redirect (Location header)
case '<': header('Content-type: text/xml'); echo $res; exit;  # Metadata or SOAP
case 'n': exit;   # Already handled
case 'e':
?>
<title>ZXID PHP PDS Demo: Please Login Using IdP</title>
<body bgcolor="#330033" text="#ffaaff" link="#ffddff"
 vlink="#aa44aa" alink="#ffffff"><font face=sans>
<h1>ZXID PHP PDS Demo. Please Login Using IdP</h1>
<?=zxid_idp_select_cf($cf, null, 0x1900)?>
<hr>zxidhlo.php, <a href="http://zxid.org/">zxid.org</a>
<?
exit;
case 'd': break;  # Logged in case -- continue after switch
default:  die("Unknown zxid_simple() res($res)");
}

# Parse the LDIF in $res into a hash of attributes $attr

foreach (split("\n", $res) as $line) {
    $a = split(": ", $line);
    $attr[$a[0]] = $a[1];
}
?>
<title>ZXID PHP Demo PDS Protected content, logged in</title>
<body bgcolor="#330033" text="#ffaaff" link="#ffddff"
 vlink="#aa44aa" alink="#ffffff"><font face=sans>
<?

# Optional: Perform additional authorization step
# (n.b. zxid_simple() can be configured to make az automatically)

$ses = zxid_fetch_ses($cf, $attr['sesid']);

#if (zxid_az_cf_ses($cf, "Action=Show", $ses)) {
#    echo "Permit.\n";
#} else {
#    echo "<b>Deny.</b> Normally page would not be shown, but we show session attributes for debugging purposes.\n";
#}
?>
<h1>ZXID PHP Demo Protected content, logged in as <?=$attr['cn']?>, session(<?=$attr['sesid']?>)</h1>
<?=zxid_fed_mgmt_cf($cf, null, -1, $attr['sesid'], 0x1900)?>

<p>Output from idhrxml web service call:<br><textarea cols=80 rows=20>
<?
$ret = zxid_call($cf, $ses, "urn:ios:pds:2010-05:dst-2.1", null, null, null,
		 "<pds:Query xmlns:pds=\"urn:ios:pds:2010-05:dst-2.1\">" .
		   "<pds:QueryItem>" .
		     "<pds:Select></pds:Select>" .
		   "</pds:QueryItem>" .
		 "</pds:Query>");
echo $ret;
?>
</textarea>
<hr>zxidpdscli.php, <a href="http://zxid.org/">zxid.org</a>
<hr>
<h1>PDS documentation snippets</h1>

<b>Service Type:</b> urn:ios:pds:2010-05:dst-2.1

Data about a given user will be in /var/zxid/pds/IDPNID/ep.xml
