#include <ansi.h>
inherit EQUIP;

void create()
{
        set_name(HIR"���۽�"NOR,({"fire eye","eye"}) );
        set_weight(2000);
        if (clonep() )
                set_default_object(__FILE__);
        else{
                set("long","
��˵����Ϊ���������ʥ����յ�ͷ�� ,�������� ,���Էų���� ,���ߺڰ���\n");

                set("armor_type","head");
                set("material","blacksteel");
                set("unit","��");
                set("armor_prop/armor",9);
                set("value",400);
                set("armor_prop/poison",2);
        set("light",-1);
        set("light_up",-1);
                set("wear_msg","$N����$n��$n���̷������ܵ��׹⣡\n");
                set("unequip_msg","$N����$n֮��$n���׹�����ʧ��\n");
                setup();
        }
}
