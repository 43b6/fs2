#include <weapon.h>
#include <ansi.h>
// QC By Swy 98/6/3
inherit UNARMED;

void create()
{
  seteuid(getuid());
  set_name(MAG"ħ��צ"NOR,({"evil claws","evil","claws"}));
  set_weight(4500);
  if( clonep() )
                set_default_object(__FILE__);
        else {
  set("unit", "��");
  set("long","����һ�Ѵ�˵�н���ħ��--����--֮�����צ�� ,.��˵���������Կ���ٵ� !\n");
  set("value",12000);
  set("material","ironsteel");
  set("ski_type","unarmed");
  set("wield_msg",HIM"$N��ħ��צ�������� ,��е��й�а������צ�д���$N���� !\n"NOR);
  set("unwield_msg",HIC"$N��ħ��צ�������� ,���ϵ�а��Ҳ�Ѳ����� .\n"NOR);
  }
  init_unarmed(50);
  setup();
}
