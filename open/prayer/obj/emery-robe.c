#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name("���ȭ����",({"emery-robe","robe"}) );
        set_weight(11000);
        if( clonep() )
                set_default_object(__FILE__);
else    {
        set("meterial","silk");
        set("unit","��");
        set("value", 10000);
        set("armor_type","cloth");
        set("wear_msg","$N������$n֮��,�����˾����Ǳ�[30m�޻긽��[0mһ��,���Ⱪ��,���������....\n");
        set("remove_msg","$N������$n֮��,ȫ����ή�Ҳ���,��ɫ�԰�......\n");
        set("armor_prop/armor", 17);
        set("armor_prop/dodge", 1);
        set("armor_prop/force", 1);
        set("long","
���������֯�ϼ��Ͻ��ɰ���Ƴ�.�·���ǰ������ʥ��̵�ʥ��ͼ��,
��������������������Ľ��ͼ��,ƽ�����Ǵ���ʥ��̸�֧�ŵ�����
���������ϡ�\n");
        }
         setup();
}





