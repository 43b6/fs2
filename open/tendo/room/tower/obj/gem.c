//����
#include <command.h>
inherit ITEM;

void create()
{
        set_name("[1;32m����[0m", ({ "gem" }));
        set_weight(30000);
        if( clonep() )
          set_default_object(__FILE__);
        else
        {
          set("unit", "��");
          set("long",@LONG
        ����һ���̳γεĴ���!!����Խ�����ȥ��ұ���Ĵ�ʦ, 
        �������ɵ��������Ƿ��߶��ǲ����!!
LONG);
          set("value", 800);
          set("material", "gem");
          set("no_sell", 1);
          set("no_auc", 1);
        }
}



