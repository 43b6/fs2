//��ͭ
#include <command.h>
inherit ITEM;

void create()
{
        set_name("[1;32m��ͭ[0m", ({ "copper" }));
        set_weight(30000);
        if( clonep() )
          set_default_object(__FILE__);
        else
        {
          set("unit", "��");
          set("long",@LONG
        ����һ���ͭ!!��ͭ���������ʽ������ȶ�, �����类ʹ��
        �Ľ���!!����Խ�����ͭ��ȥ������������Ƿ���!!����
        ��ͭ��Ӳ�Ƚ���С, �������ɵ��������ܻ�����׾Ͷϵ���
        !!
LONG);
          set("value", 800);
          set("material", "copper");
          set("no_sell", 1);
          set("no_auc", 1);
        }
}



