// more.c babe ^o^

#include <ansi.h>

void more( string cmd, string *text, int line )
{
	int	m, n;

	n = sizeof(text);
	if( sscanf( cmd, "%d", m )==1 )
		if( m<1 || m>n )
			line -=	23;
		else
			line = m-1;
	switch(cmd) {
		case "p" :
		case "P" :
			line -= 46;
			break;
		case "h" :
		case "H" :
			line = 0;
			break;
		case "r" :
		case "R" :
			line -= 23;
			break;
		case "e" :
		case "E" :
			line = n - 24;
			break;
		case "q" :
		case "Q" :
			return;
	}
	if( line < 0 )
		line = 0;
	if( sizeof(text[line..]) > 24 )
		for( m=line+23; line<m ; line++ )
			write( text[line] + "\n" );
	else {
		for( ; line<n; line++ )
			write( text[line] + "\n" );
			return;
	}
	printf( BCYN""HIW" P.%d %d/%d(%d%%) [H]��ҳ [P]��ҳ [R]��ҳ [ENTER]��ҳ [E]βҳ [Q]���� [ ]���� "NOR,
		line/23, line, n, line*100/n+1 );
	input_to( "more", text, line );
}

void start_more( string msg )
{
	if( !msg || msg == "" )
		return;
	more( "", explode( msg, "\n" ), 0 );
}

void more_file( string cmd, string file, int line )
{
	string buf;

	switch(cmd) {
		case "p" :
		case "P" :
			line -= 46;
			break;
		case "h" :
		case "H" :
			line = 1;
			break;
		case "r" :
		case "R" :
			line -= 23;
			break;
		case "q" :
		case "Q" :
			return;
	}
	if( line < 1 )
		line = 1;

	if( buf = read_file( file, line, 23 ) ) {
		line += 23;
		write(buf);
		if( read_file( file, line, 1 ) ) {
			write( BCYN""HIW" [H]��ҳ [P]��ҳ [R]��ҳ [ENTER]��ҳ [Q]���� "NOR );
			input_to( "more_file", file, line );
		}
	}
}
