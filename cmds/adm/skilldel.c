#include <ansi.h>
inherit F_CLEAN_UP;
int main(object me, string arg)
{
	string key, chinz;

        seteuid(geteuid());
	if( !arg || arg=="" )
		return notify_fail("ָ���ʽ��skilldel <����Ӣ��>\n");

	key=arg;
	write("skill "+key+" del\n");
	F_SKILL_D->remove_translate(key);

	return 1;
}

int help()
{
	write ( @HELP
ָ���ʽ��skilldel <����Ӣ��>
 
HELP
	);
	return 1 ;
}
