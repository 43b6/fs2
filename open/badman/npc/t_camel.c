#include </open/open.h>
#include <ansi.h>

inherit NPC;
void create()
{
  set_name("[1;33m����[0m", ({ "desert camel","desert","camel"}));
  set("title", "[33m��ɳ[0m");
  set("gender", "Ұ��");
  set("long","һֻ�������գ�����ɫ��Ƥ�������͵�����է��֮�²�����
ʲô�˲�������ޡ�����ϸһ����������΢΢͸��ҫ�۹�ʣ���ɳ
�����ش����ھ׽����ϵ��������������������һﲢ�����ǣ�
");
  set("combat_exp",1000000);
  set("max_kee",3000);
  set("max_gin",1870);
  set("max_sen",2150);
  set("max_force",3500);
  set("force",3500);
  set("force_factor",60);
  
setup();
}

void die()
{
  object killer;
  killer=query_temp("last_damage_from");
  killer->set_temp("marks/k_camel",1);
  message_vision("[1;31m$N������𣬳�ɳ���Ȼ������Ѫ���Ľų��죬���ˣ�[0m\n",killer);
  ::die();
}

void unconcious()
{
  object killer;
  killer=query_temp("last_damage_from");
  killer->set_temp("marks/f_camel",1);
  message_vision("[1;36m$N�ɹ���ѱ�������գ�[0m\n",killer);
  ::unconcious();
}
