//�ƽ�
#include <command.h>
inherit ITEM;

void create()
{
        set_name("[1;33m����[0m", ({ "golden" }));
        set_weight(30000);
        if( clonep() )
          set_default_object(__FILE__);
        else
        {
          set("unit", "��");
          set("long",@LONG
        ����һ��ƳγεĻƽ�!!���ȿ����� 9999 ��!!����Խ���
        ��ȥ��ұ���Ĺ���, ���������������Ƿ��߶��ǲ����!!��
        Ȼ�ܶȸ�, �����Լ�, ����Ӳ�Ȳ�, ��չ�Լ�, ��Ϊ������
        ���Ļ�ʹ�������������������!!
LONG);
          set("value", 800);
          set("material", "gold");
          set("no_sell", 1);
          set("no_auc", 1);
        }
}



