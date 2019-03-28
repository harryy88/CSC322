


#!/bin/tcsh
set DIRNAME=/usr/bin
set FILETYPE="shell script"
set LOGFILE=logfile
file "$DIRNAME"/* | fgrep "$FILETYPE" | tee $LOGFILE
exit 0 
