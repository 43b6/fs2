#include <armor.h>
#include <ansi.h>
inherit PANTS;
void create()
{
       set_name(HIY "��ʥ����" NOR, ({ "kensai pants" ,"pants" }) );
       set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value", 0);
                set("long","���ƻ���...��Ҫ�ڴ�����ʥ��������©֮���֡�\n");
            set("wear_msg",HIC"����$n[1;37m�󣬽�ʥ֮��˲�����\n"NOR);
                set("material", "sliver");
                set("armor_prop/armor", 15);
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
                set("armor_prop/parry", 10);
                set("armor_prop/sword", 7);
                set("armor_prop/dodge", 10);
        }
                setup();
}
