// made by ccat
#include <ansi.h>
#include <armor.h>
inherit CLOTH;

void create()
{
        set_name(HIW"��˪��˿��"NOR, ({ "cold cloth","cloth"}) );
        set("long",
                   "��Ϊ��˵��������˪���ɵĵ����ۣ�\n"
                   "��˺����������������𡢼����ǻͣ�ͬʱ���ϵ�ɢ\n"
                   "����ɫ֮��ԣ���ҫ�˼䡣\n");
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit","��");
                set("material","crimsonsteel");
                set("value",100000);
                  set("armor_prop/armor",30);
                set("armor_prop/dodge",7);
                set("armor_prop/unarmed",5);
                set("armor/type","cloth");
              }

        setup();
}
// �����Ǵ���ʱ�ᷢ�⣬��жʱ�������ĳ�ʽ
/*
void init()
{
        add_action("do_wear","wear");
        add_action("do_remove","remove");
}
int do_wear(string str)
{
        this_player()->set_temp("light_up",1);
        wear();
        set("wear_msg","$N����$nʱ��ɢ��������ĺ��⣡\n");
        return 1;
}
int do_remove(string str)
{
        this_player()->delete_temp("light_up");
        unequip();
        set("unequip_msg","$N����$n֮��$n�ĺ�������ʧ��\n");
        return 1;
} 


*/
