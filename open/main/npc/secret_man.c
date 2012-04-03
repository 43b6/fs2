//secret_vendor.c
//����С��...ֻ������
void do_patrol();
inherit NPC;
void create()
{
        set_name("����С��",({"vendor"}));
        set("gender", "����" );
        set("age", 27);
set("long", @LONG
���봫˵�е�����С��,��˵����Ӫ������ż(standby)������,����Ҫ�Ļ����Դ�(want standby)������!!!!
���Ǵ�(sell standby)�����ϵ�������ż����!!!!!

LONG
        );
        set("combat_exp",10000000);
        set("chat_chance",2000);
        set("chat_msg",({
            (: do_patrol :),
        }));
        set("attitude", "friendly");
        set("max_kee",7000);
        set("max_sen",6000);
        set("max_gin",5000);
        set("standby",99999);
        set_skill("dodge",500);
        set_skill("parry",500);
        set_skill("unarmed",500);
        set_skill("move",500);
        set_skill("force",500);
        set_skill("universe",500);
        set_skill("superforce",500);
        set_skill("ghost-steps",500);
        map_skill("unarmed", "universe");
        map_skill("parry","universe");
        map_skill("force", "superforce");
        map_skill("dodge", "ghost-steps");
        map_skill("move", "ghost-steps");
        setup();
}
void init()
{
  add_action("do_want","want");
  add_action("do_sell","sell");
  add_action("do_follow","follow");
  add_action("do_perform","perform");

}

int do_want(string arg)
{
 object me,ob;
 me=this_player();
 if( arg!="standby")
  {
    write("��ֻ��������(standby)!!\n");
    return 1;
  }
 if(me->query("bank/coin") < 2000000000)
  {
    write("����Ǯׯ��Ǯ����,��Ҫ��ʮ�����ƽ�!!\n");
    return 1;
  }
 else
  {
    me->set("bank/coin",0);
    write("��������С������һ����������(standby)!!!\n");
    me->add("standby",1);
    return 1;
  }
}
int do_sell(string arg)
{
 object me,ob;
 me=this_player();
 if( arg!="standby")
  {
    write("��ֻ��������(standby)!!\n");
    return 1;
  }
 if(me->query("standby") < 1)
  {
    write("������û��������ż��˵!!\n");
    return 1;
  }
 else
  {
    if( me->query("bank/coin") != 0)
      return notify_fail("���Ƚ�Ǯׯ�� coco �����������ȻǮׯ�ᱩ���!!!\n");
    me->add("bank/coin",2000000000);
    write("������һ�������С��,����ʮ�����ƽ�!!!\n");
    me->add("standby",-1);
    return 1;
  }
}

int do_follow(string arg)
{
 object me,ob;
 me=this_player();
 if( arg!="vendor")
    return 1;
 write("����С��ʹ�������Ṧ......˲���������������........!!\n");
 this_object()->move("/u/c/chan/workroom.c");
 return 1;
}
int accept_fight(object who)
{
 command("say ...ż!ż!ż!..������..��\n");
 return 0;
}
int accept_kill(object who)
{
  command("say ����!!!\n");
  write("С�����Ϸ���ǿ�������,ѹ���㲻֪������Ǻ�\n");
  who->start_busy(2);
  kill_ob(who);
  return 1;
}
int do_perform(object who)
{
  who=this_player();
  command("say ����!!!\n");
  write("С�����Ϸ���ǿ�������,ѹ���㲻֪������Ǻ�\n");
  who->start_busy(2);
  kill_ob(who);
  return 1;
}

void do_patrol()
{
  if( random(6) == 1)
        command("go north");
  else if( random(6) == 2)
        command("go south");
  else if( random(6) == 3)
        command("go east");
  else if( random(6) == 4)
        command("go up");
  else if( random(6) == 5)
        command("go down");
  else  command("go south");
return;
}
