//����
#include <command.h>
inherit ITEM;

void create()
{
        set_name("[1;37m����[0m", ({ "iron" }));
        set_weight(30000);
        if( clonep() )
          set_default_object(__FILE__);
        else
        {
          set("unit", "��");
          set("long",@LONG
        ����һ��մӿ����ھ����������!!��������������ʱ������
        �Ĳ���֮һ, ��Ϊ�����ܶȹ�, Ӳ�ȼ�, ��չ��Ҳ����!!����
        �������������Ҫ����!!
LONG);
          set("value", 800);
          set("material", "iron");
          set("no_sell", 1);
          set("no_auc", 1);
        }
}




