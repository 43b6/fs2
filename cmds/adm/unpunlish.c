#include <ansi.h>
inherit F_CLEAN_UP;
int main(object me, string arg)
{
	string key, chinz;
	string class1;

        seteuid(geteuid());
	if( !arg || arg=="" )
		return notify_fail("ָ���ʽ��unpunlish <�ܷ���> <�̷�>\n");

	if(sscanf(arg,"%s %s",class1,key)==2){
	PUNLISH_D->remove_translate(class1,key);
	write("���"+class1+"��"+key+"�̷�\n");

	return 1;
	}
	return 0;
}

int help()
{
	write ( @HELP
ָ���ʽ��unpunlish <�ܷ���> <�̷�>\n
 
HELP
	);
	return 1 ;
}
