#include <weapon.h>
#include <ansi.h>
inherit UNARMED;

void create()
{
  seteuid(getuid());
  set_name(HIY"ţ��׶"NOR,({"cow horn","cow","horn"}));
  set_weight(2100);
  if( clonep() )
                set_default_object(__FILE__);
        else {
  set("unit", "��");
  set("long","����ʮ������֮�еĻ�ţ����ϲ�������� .����ϸ�ض�����һ�� ,������ͱ��צ���൱��ͬ .�м�Ļ�ɫ�������ķ�ɢ����ҫ�۵Ĺ�â ,��������������ֻ�ԳƵĺֻ�ɫţ�� ,���滹����Щ����ɫ��Ѫ�� ,������Ӧ����ǰ��ʹ���������ɱ����ʱ�����µ� .\n");
  set("value",10000);
  set("material","ironsteel");
  set("ski_type","unarmed");
  }
  init_unarmed(30);
  setup();
}
