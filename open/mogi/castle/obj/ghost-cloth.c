// �����armor��mob exp:160��
#include <armor.h>
#include <ansi.h>
inherit CLOTH;


void create()
{
        set_name("����ս��",({"ghost cloth","cloth"}) );
	set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
һ��ɢ����Ũ��������ս�ۡ�
\n");
        set("unit", "��");
        set("value",10000);
        set("material","crimsonsteel");
	set("armor_prop/armor",20);
	set("armor_prop/unarmed",2);
        set("armor_prop/force",2);
        }
        setup();
}
