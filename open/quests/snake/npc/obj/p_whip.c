#include <weapon.h>
#include <ansi.h>
inherit WHIP;

void create()
{
        set_name(HIC"���߱�"NOR,({"poison whip","whip"}));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit","��");
          	set("value",5000);
                set("material","iron");
                set("rigidity",70);
                set("long",
        "�����Գ��ڽ����ڶ���Һ�е���Ƥ��֯���ɣ��߱��ϻ�����һЩ������
��������֮�綾���޶��ԣ�����ȴ�����ӱ��ӵ��˺�����\n");
        }
        init_whip(80);
        setup();
}