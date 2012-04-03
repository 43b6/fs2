// lstree.c by babe

inherit F_CLEAN_UP;

#include <ansi.h>

string tree( string path, int n )
{
	int i, j, w, col, len;
	string msg;
	mixed *file;

	file = get_dir( path, -1 );
	if( !sizeof(file) )
		return "";

	i = sizeof(file);
	w = 0;

	while(i--) {
		if( file_size(path+file[i][0])==-1 ) file[i][1]=-3;
		len=sizeof(file[i][0]);
                if( file[i][1]==-2 )
			continue;
                else if( file[i][0][len-2..len-1] == ".c" )
                        file[i][0] = HIG+file[i][0]+NOR;
                else if( file[i][0][len-2..len-1] == ".h" )
                        file[i][0] = HIY+file[i][0]+NOR;
                else
                        file[i][0] = HIM+file[i][0]+NOR;
                if( file[i][1]/1024/n > 0 && strlen(file[i][0]) > w )
			w = strlen(file[i][0]);
	}

        col = 79 / ( w-6 );
        w   = 79 / col + 7;

	msg = HIW"Ŀ¼��"HIY + path + "\n"NOR;
	for( i=0, j = sizeof(file); i<j; i++ ) {
		len = sizeof(file[i][0]);
		if( file[i][1] == -3 )
			continue;
                if( file[i][1]==-2 )
                        msg += tree( path + file[i][0] + "/", n );
		if( file[i][1]/1024/n )
			msg += sprintf( "%3d%s%-*s%s",
				( file[i][1]/1024/1024 ) ? file[i][1]/1024/1024 : file[i][1]/1024 + 1,
				( file[i][1]/1024/1024 ) ? "M" : " ", w,
				( find_object(path+file[i][0][7..len-5] ) ? file[i][0][0..len-5]+NOR"*" : file[i][0]),
				( (i+1)%col )? "" : "\n" );
	}
	msg += "\n";
	return msg;
}

int main( object me, string arg )
{
	int n;

	if( arg ) {
		if( sscanf( arg, "%d", n )!=1 || n<1 || n>10240 )
			return notify_fail( "������С��Χ 1 ~ 10240 ��\n" );
	}
	else
		n = 99;

	this_player()->start_more(tree( me->query("cwd"), n ));
	return 1;
}

int help( object me )
{
        write( @HELP
ָ���ʽ: lstree [������С(KB)]

ָ��˵��: ��ʾ����[������С]�ĵ����б�

				by ACKY

HELP );
        return 1;
}
