#include <ansi.h>
inherit F_CLEAN_UP;
int main(object me, string arg)
{
	string key, chinz;

        seteuid(geteuid());
	if( !arg || arg=="" )
		return notify_fail("指令格式：skilldel <技能英文>\n");

	key=arg;
	write("skill "+key+" del\n");
	F_SKILL_D->remove_translate(key);

	return 1;
}

int help()
{
	write ( @HELP
指令格式：skilldel <技能英文>
 
HELP
	);
	return 1 ;
}
