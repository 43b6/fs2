#include <ansi.h>
#include <armor.h>
inherit CLOTH;
void create()
{
        set_name(HIW"������"NOR, ({ "ice cloth","cloth"}) );
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit","��");
                set("long", "���Ϻ����˗���ɽ��������˿����֯����˿ǿ�ͣ����䣬���������������ɴ��ţ�\n");
                set("material","crimsonsteel");
                set("value",100000);
                  set("armor_prop/armor",20);
                set("armor_prop/dodge",6);
                set("armor_prop/parry",6);
                set("armor_prop/move",5);
                set("armor/type","cloth");
                set("wear_msg", "$N��$n�������ϣ���ʱһƬ��â��ס$N��\n");
                set("unwear_msg", "$N��$n���²���һ��˿��ϵ�����䡣\n");
              }

        setup();
}


