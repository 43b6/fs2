#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name("[32mǬ��ս����[0m",({"boris-cloth","cloth"}) );
        set_weight(15000);
        if( clonep() )
                set_default_object(__FILE__);
else    {
        set("meterial","silk");
        set("unit","��");
        set("value", 200000);
        set("armor_type","cloth");
        set("wear_msg","[36m$N������$n֮��,ֻ��[35m�������[36m,ȫ��ɢ�����ۻ�Ķ���!![0m\n");
        set("remove_msg","$N��$n����֮��,�ۻ�Ķ�����������ɢ��!!\n");
        set("armor_prop/armor", 20);
        set("armor_prop/dodge", 5);
        set("armor_prop/unarmed", 15);
        set("armor_prop/stick", 15);
        set("armor_prop/force", 5);
        set("long","
���������֯��������Ѫ�������Ƥ����Ƴ�,ǰ������ʥ��̵�ʥ��
ͼ��,��������Ů������ͼ��. ��ǹ����,ˮ����.��ʥ�����������
�ĵմ����¡�\n");
        }
         setup();
}





