// clan_index.c by ACKY 04/04/00

#include <ansi.h>
mapping cmds = ([]);

int main( object me )
{
	int i,o=0;
	mixed *file;
	string list="";
	file = get_dir("/doc/help/clan/",-1);
	for( i=0; i<sizeof(file); i++ )
		if( file[i][1]!=-2 )	{
			cmds[o] = file[i][0];
			o++;
		}
	list += sprintf(HIM"\n                 .__________"HIW"����˵���ļ�"HIM"__________.\n\n"NOR);
	for( i=0; i<sizeof(cmds); i++ )
		list += sprintf("%-20s%s", cmds[i],(i%4==3) ? "\n" : "" );
	me->start_more(list);
	return 1;
}
