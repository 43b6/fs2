#include <ansi.h>
inherit EQUIP;
void create()
{
        set_name(HIY "����Ь" NOR,({"boots"}) );
        set_weight(2000);
        if ( clonep() )
                set_default_object(__FILE__);
        else{
                set("long","
����Ҷ��ɱר�õ�����Ь�ӣ��ഫΪ��Զ������İ�ͷ����Ƥ���ƣ��ں�������������
�ഫ���в���˼��֮Ч��\n");
                set("unit","˫");
                set("value",20000);
                set("armor_prop/armor",5);
                set("armor_prop/dodge",2);
                set("armor_prop/move",3);
                set("material","leather");
                set("armor_type","boots");
            set("wear_msg", "$N����$n��Ȼ�е�������ӯ������������Ҫ��һ�㡣\n");
            set("remove_msg", "$N��$n�����������е�����һ�����ָֻ�ԭ״�ˡ�\n");
                setup();
        }
}