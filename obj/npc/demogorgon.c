// demongorgon.c

#include <ansi.h>

inherit NPC;

void create()
{
  set_name( HIW "�������" NOR, ({ "demogorgon" }) );
  set("long",
    "������������ư���վ������ǰ�����ߴ��������һ��������Ϣ��\n"
    "����ɱ����ѹ���㼸����������������������ƺ���һ�������ڸ�\n"
    "���㣺�� �� �� ������\n");

  set("age", 7006);

  set("max_gin", 5000);
  set("max_kee", 5000);
  set("max_sen", 5000);

  set("max_atman", 9999);
  set("atman", 9999);
  set("max_force", 5000);
 set("force_factor", 100);
  set("force", 5000);
  set("max_mana", 5000);
  set("mana", 5000);

  set("str", 100);
  set("cor", 100);
  set("cps", 100);
  set("spi", 100);
  set("int", 100);
  set("con", 100);
  set("kar", 0);
  set("per", 0);

 set("combat_exp",5650000);

  set_skill("move", 100);
  set_skill("fly-steps",80);
  map_skill("move","fly-steps");

  set_skill("staff", 100);

  set_skill("unarmed", 100);
  set_skill("parry", 100);
  set_skill("badstrike",100);
  map_skill("unarmed", "badstrike");
  map_skill("parry", "badstrike");

  set_skill("dodge", 100);
  set_skill("chen-steps", 100);
  map_skill("dodge","chen-steps");

  set_temp("apply/attack", 100);
  set_temp("apply/defense", 100);
  set_temp("apply/armor", 100);
  set_temp("apply/damage", 100);

  setup();

  carry_object(__DIR__"obj/demon_staff")->wield();
}

void start_shutdown(int time)
{
  message("system",
    "\n����������д���һ����µ����� ....\n\n"
    "�����������������������ȵ���\n\n"
      "\t\tȫ �� �� �� �� �� �� �� �� �� ��\n\n"
      "\t\t������"+HIY+chinese_number(time)+NOR
      "�����ڰ������������ͷ­������ ��\n\n"
      "\t\t�� Ȼ �� �� ..... �� .. �� ��\n\n" NOR,
    users() );
  call_out("countdown", 60, time);
}

private void countdown(int min)
{
  min--;
  if (min > 15) call_out("countdown", 60, min);
  else if( min ) {
    message("system",
      "\n�����������������������ȵ���\n\n"
      "\t\t���ǻ���" +HIY +chinese_number(min)+NOR "���ӵ�ʱ�佻���ҵ�ͷ­��\n\n"
      "\t\t������Ҫ�������ĩ��ͩ������ҩ����������ϩ��ɩ���\n\n" NOR,
      users() );
    call_out("countdown", 60, min);
  } else {
    message("system",
      "\n�����������������������ȵ���\n\n"
      HIB"\t\t�ɺ�.....���ǿɺ�....\n\n"
        "\t\t���찡�� ��ذ���  ���󰡡�  ��������\n\n" NOR,
      users() );
    call_out("do_shutdown", 3);
  }
}

private void do_shutdown()
{
  object	*ob, link;
  int		i;

  message("system",
    "\n\n�����������������������ȵ���\n\n"
    "\t\tͨ ͨ �� �� һ �� �� �� �� �� �������� ��\n\n"
    HIR "\t\t����һ�ϣ�������̱��Ѫ�죬��....����ǰ��һ�ж����Ѫ��...\n\n"
      "\t\t���е�һ�ж���˲�������....\n\n"NOR
      "\t\tȻ�������ǰ��һƬ�ڰ�....��ֹ���ĺڰ�....\n\n",
    ob = users() );

  for (i=0; i<sizeof(ob); i++) {
    if(!ob[i]) continue;
    ob[i]->save();
    if( objectp(link=ob[i]->query_temp("link_ob")) ) link->save();
  }
  shutdown(0);
}

void die()
{
  object ob;

  if( !ob = query_temp("last_damage_from") )
    ob = this_player(1);

  if( !ob ) return;

  message("system",
    HIR "\n\n������һ�����ŷߺޡ����֡���Ұ�ް���������쳹������ա�\n\n"
    HIW "�������" HIR "˻�Ƶغ��ţ��ɶ��" + ob->name(1) + "����һ���ᱨ��ġ�����\n\n"
      "Ȼ��һ����ɫ�����Х�ų����ƶˣ�����ָֻ���������\n\n" NOR,
    users() );
  destruct(this_object());
}
