#include <ansi.h>
inherit F_CLEAN_UP;
int main(object me, string arg)
{
	string key, chinz;
    string cls;

        seteuid(geteuid());
	if( !arg || arg=="" )
		return notify_fail("ָ���ʽ��delguild <ְҵ����> <��������>\n");

    if(sscanf(arg,"%s %s",cls,key)==2){
    GUILD_D->remove_translate(cls,key);
	write("ɾ��һ������"+key+"��\n");

	return 1;
	}
	return 0;
}

int help()
{
	write ( @HELP
ָ���ʽ��delguild <ְҵ����> <��������>
 
HELP
	);
	return 1 ;
}
