# FT_PING

Recreate the well-known command 'ping' in C.

    make
    ./ft_ping [-v -h] target

    -h : sweepincrsize : Specify the number of bytes to increment the size of ICMP payload after each sweep when sending sweeping pings. The default value is 1.
    -v : Verbose output : ICMP packets other than ECHO_RESPONSE that are received are listed.

The ping utility uses the ICMP protocol's mandatory ECHO_REQUEST datagram to elicit an ICMP ECHO_RESPONSE from a host or gateway.
ECHO_REQUEST datagrams pings have an IP and ICMP header, followed by a struct timeval and then an arbitrary number of pad bytes used to fill out the packet.

## Documentation

* Deep View

    EN Wiki (Top) https://en.wikipedia.org/wiki/Ping_(networking_utility)

    https://openmaniak.com/ping.php    
    https://www.geeksforgeeks.org/ping-in-c/    
    http://support.tenasys.com/INtimeHelp_6/util_ping.html  
    http://linux-ip.net/html/tools-ping.html    
    https://www.cisco.com/c/en/us/support/docs/ip/routing-information-protocol-rip/13730-ext-ping-trace.html    
    https://www.ionos.fr/digitalguide/serveur/outils/commande-ping/    
    https://linux.developpez.com/tutoriels/apprendre-unix-aller-plus-loin-ligne-commande/?page=communiquer    

    Cisco Ping : https://www.cisco.com/c/en/us/support/docs/ios-nx-os-software/ios-software-releases-121-mainline/12778-ping-traceroute.html

* Quick View

    ✅ &nbsp; https://stevessmarthomeguide.com/ping-command-home-network-testing/    
    ✅ &nbsp; https://phoenixnap.com/kb/linux-ping-command-examples    
    ✅ &nbsp; https://www.geeksforgeeks.org/difference-between-ping-and-traceroute/?ref=rp   

## Rendu

Vous devez gérer une IPv4 simple (adresse/hostname) comme paramètre du pro-gramme.
Vous devez gérer le FQDN sans pour autant effectuer la résolution DNS dans leretour du paquet
Vous devez être sous une VM avec un noyau Linux > 3.14
Exception faite de la ligne RTT, le résultat devra avoir une indentation identiqueau ping réel
Une différence de +/- 30ms est acceptable sur un paquet
Vous avez le droit d’utiliser les fonctions de la famille printfainsi qu’une globale