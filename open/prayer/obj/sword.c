#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
        seteuid(getuid());
        set_name("[31m��Խ�[0m",({"red-sword","sword"}));
        set_weight(35000);
        if( clonep() )
        set_default_object(__FILE__);
        else {
        set("unit", "��");
        set("long",@LONG

	������������ʫ���彣��һ���Ժ������ƵĶ̽��������������
	ϸϸ�ľ�ݣ��������ɱ������ͬʱ��ѽ�Ҳ����Ů�������˵�
	�彣, ����Ůɢ���������ʹ�ú�, ��������!!

LONG);
        set("value",12000);
        set("no_drop",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_auc",1);

        set("material", "iron");
        set("wield_msg", "$N�ӽ���һ�γ�$n��[31m�������[0m��\n");
        set("unwield_msg", "$N���·���$n�������������ɫ�ĺ��ⱻ�������ڱ��ˡ�\n");
        }
        init_sword(100);
        setup();
}                            
