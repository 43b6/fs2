//�Ƽ׽�������Ƭ()
#include <command.h>
inherit ITEM;

void create()
{
        set_name("[33m�Ƽ׽�������Ƭ[0m", ({ "dragon skin","skin" }));
        set_weight(30000);
        if( clonep() )
          set_default_object(__FILE__);
        else
        {
          set("unit", "��");
          set("long","������а������[33m�Ƽ׽���[0m����Ƭ, ����[33m�Ƽ׽���[0mȫ�����¾���������ħ����
          �������Ƭ��ȥ���ɷ��߻��·�!? �ǲ��Ϳ��Ե�ǹ��������??..........\n");
          set("value", 800);
          set("material", "fur");
          set("no_sell", 1);
          set("no_auc", 1);
        }
}


