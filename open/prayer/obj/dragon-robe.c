#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name("��֮ȭ����",({"dragon-robe","robe"}) );
        set_weight(13000);
        if( clonep() )
                set_default_object(__FILE__);
else    {
        set("meterial","silk");
        set("unit","��");
        set("value", 60000);
        set("wear_msg","$N������$n֮��,����һ��,��������ͬ��[33m�Ƽ׽���[0m��,����[33m�������[0m!!
            ֻ�����ƺ��м��˽������͵�����!!\n");
        set("remove_msg","$N������$n֮��,�ǽ����𽥵���ʧ��ȭ���µ�����......\n");
        set("armor_type","cloth");
        set("armor_prop/armor", 18);
        set("armor_prop/dodge", -3);
        set("armor_prop/unarmed", 10);
        set("armor_prop/stick", 10);
        set("armor_prop/force", 3);
        set("long","
���������֯����Ƽ׽�������Ƥ��֯����,�·���ǰ������ʥ��̵�
ʥ��ͼ��,�������Ǻ����������������,������ʥ��̳����Ǹ߸�����
��Ȩ�ơ�\n");
        }
         setup();
}





