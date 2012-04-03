// dusa.c by oda

#include </open/open.h>
#include <ansi.h>

inherit NPC;
inherit F_MASTER;
string do_ask();
string do_ask2();

void create()
{
        set_name("��ɱ", ({ "du sa", "du", "sa" }) );
        set("nickname", "Ѫ��");
        set("title", "���˹ȴ�ͷĿ");
        set("gender", "����");
        set("age", 41);
        set("class", "bandit");
        set("guild_master", 1);
        set("bellicosity", 2500);
        set("attitude", "badman");
        set("combat_exp", 3000000);
        set("long","��������������ֳ���һ��ѩ�׵ĳ��ۣ��������͸������·�һ���԰ס�
��ϸһ������ŷ������������Ѿ����ˣ�����װ����һ�������ĸֹ��������Ƕ��˹���
������η���ʮ�����֮�ף���Ѫ�֡���ɱ��");

        set("str", 40);
        set("cor", 40);
        set("int", 24);
        set("spi", 22);
        set("cps", 30);
        set("con", 30);
        set("per", 16);
        set("max_gin", 10000);
        set("max_kee", 10000);
        set("max_sen", 10000);
        set("gin", 10000);
        set("kee", 10000);
        set("sen", 10000);
        set("max_force",5000);
        set("force",5000);
        set("force_factor", 10);

        set_skill("array",80);
        set_skill("magic",20);
        set_skill("spells",20);
        set_skill("bad-array",100);
        set_skill("change",100);
        set_skill("dodge", 80);
        set_skill("sword",80);
        set_skill("ghost-steps",100);
        set_skill("force", 70);
        set_skill("badforce",100);
    set_skill("counter",80);
        set_skill("move", 80);
        set_skill("parry",70);
        set_skill("unarmed",80);
        set_skill("cure",50);
        set_skill("badstrike",100);
        set_skill("gamble", 50);
        set_skill("literate",30);
        map_skill("unarmed", "badstrike");
        map_skill("array", "bad-array");
        map_skill("parry", "badstrike");
        map_skill("force", "badforce");
        map_skill("dodge", "ghost-steps");
        map_skill("move", "ghost-steps");
        set("quests/badroar",1);
        set("functions/evil-blade/level",100);
        set("functions/badroar/level",50);

        set("chat_chance_combat", 60);
        set("chat_msg_combat", ({
                (: perform_action, "unarmed.evil-blade" :),
        (: perform_action, "unarmed.badroar" :),
        }) );
        set("inquiry",([
        "����" : (: do_ask :),
        "����ɭ��" : (: do_ask2 :),
        ]));

        setup();
        create_family("���˹�",1,"��ͷĿ");
        set("family/next_title", "С��");
        add_money("gold", 10);
        carry_object(BAD_OBJ"badhelmet")->wear();
        carry_object(BAD_OBJ"evil_claw.c")->wield();
}

void init()
{
        add_action("do_join", "join");
}

int accept_fight(object who)
{
        message_vision("��ɱ���������$Nһ�ۡ�\n", who);
        command("say �ߣ����������ļһ\n");
        return 1;
}

void attempt_apprentice(object who)
{
        if( !who->query("class") ) {
                command("shake "+who->query("id"));
                command("say �������(join)������һ����˵�ɡ�");
                return;
        }
        if( who->query("class")!="bandit" ) {
                command("stare "+who->query("id"));
                command("say ���˹��Ǹ�ǿ���ģ�������Щ�����ϰ��ջ��ǿ���ɣ�");
                return;
        }
        if(!who->query("quests/badman_license")) {
                tell_object(who,"��ɱ����Ŀ�����˵����ƾ��Ҳ�������˹ȣ����������������һ���˵�ɣ�\n");
                who->delete_temp("pending/apprentice");
                return;
        }
        command("look "+who->query("id"));
        command("say �ã��Ҿ��������ͽ�ܡ�");
        command("recruit "+who->query("id"));
        tell_object(who,"��ɱ˵������ס�����˹���֤�����ˣ�Ҫ�Ƕ���֤��ʧ�Ļ�����ȥ����ʦ��˾�����á�\n");
        command("say ������Ȼ������˶��˹ȣ�����Զ���������������....");
        command("hehe "+who->query("id"));
    if (who->query("quests/badroar",1))
    {
       tell_object(who,"�� ,���Ӳ����� !�� ,����Բ��ôӻ������!!!\n");
       who->set("title","[33m��[31m��[32m��[0m");
       return;
    }
}

int do_join()
{
        object who;
        who = this_player();

    if( who->query("class"))
    return notify_fail("Ҫ���빤���ȥ���ϴ��ͷ!\n");

   return 1;

/*
        if( who->query("class") )
                return notify_fail("���Ѿ��������������ˡ�\n");
        who->set("class", "bandit");
        message("system", HIW"��ɱ�����Х�����ǵ����ֶ���һ������֮ͽ��"HIR+who->query("name")+HIW"\n���ҪС����������������\n"NOR, users());

        return 1;
*/
}


void die()
{
/*
        object weapon;
        weapon = present("hook", this_object());
        destruct(weapon);
*/
        object winner = query_temp("last_damage_from");        
        int j;
        if(!winner)
        {
        ::die();
        return ;
        }
        if ( winner->query_temp("bless")==1 )
        {
        j=random(6000);
          if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
          {      
          new("/open/sky/obj2/soil_stone")->move(environment(winner));
          message_vision(HIM"\n�Ӷ�ɱ�����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/soil_stone",sprintf("%s(%s) �ö�ɱ�����˵���ʯ�� %s\n",
          winner->name(1),winner->query("id"),ctime(time())));
          }
        }else{
        j=random(12000);
          if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
          {      
          new("/open/sky/obj2/soil_stone")->move(environment(winner));
          message_vision(HIM"\n�Ӷ�ɱ�����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/soil_stone",sprintf("%s(%s) �ö�ɱ�����˵���ʯ�� %s\n",
          winner->name(1),winner->query("id"),ctime(time())));
          }
        }
        tell_object(users(),"
"RED"���˹�"HIY"����˺���ѵص�ŭ��\n
                   "HIY"��"HIR"��ħ˫��Ѫ��������ɱһ������"HIY"��\n
                �����������ҡ�"HIR"Ѫ��"HIY"��"HIG"��ɱ"HIY"����������ʮ����...\n
                         һ����ɱ֮���Ѳ��ɼ���...\n
                  ������ȴʧ��������"HIW+winner->query("family/family_name")+HIY"С����"+HIC+winner->query("name")+HIY+"֮��...\n
                     "RED"һ������"HIY"������һ�������ǿɺް���\n"NOR);
        ::die();
}

int accept_object(object me,object ob)
{
  if(ob->query("id")=="sa`s hand")
   {
     if(me->query("quests/badroar"))
      {
       command("say �Ҳ��Ǵ����ɱ������ ?����Ҫл�� !");
        destruct(ob);
       return 1;
      }
    if(me->query("class")!="bandit")
    {
        kill_ob(this_player());
        destruct(ob);
        command("say �㲻�۶��˹ȵ� ,��ô�ܵ�ɭ��ȥ���ҵ�����!?");
    }
   if (me->query_temp("marks/allow")!=1)
    {
     destruct(ob);
     command("say �,л��!�����´α���������ܽ���!!!");
    }
  else {
  command("nod "+me->query("id"));
  me->set("quests/badroar",1);
  destruct(ob);
command("say ����\�����Ƕ��˹ȵ�ģ�� !������ ,��Ҳûʲô�ö����ܸ��� ,�㴫��\n���Ƕ����������߽����Ŀھ�--���׶� ,��޹�....������ ,\n�����Ժ�ɻ�����Ƿ��");
  tell_object(me,"����΢����������ֵ����� ,����ɱ��һ�� ,��ɱ��(badroar)�Ĺ���������!!\n");
  me->set("title","[33m��[31m��[32m��[0m");
        }
  return 1;
    }
}
string do_ask()
{
  int me;
  object who;
  who = this_player();
  if(who->query("quests/badroar")!=1)
  {
  if(who->query_temp("marks/hand_again")!=1)
  {
   who->set_temp("marks/hand",1);
   return "������쵰 !����һ��С��ර��ҹܱ���ү���� !������� ?\n";
  }
  else
  {
   who->set_temp("marks/allow",1);
    return "û�뵽�����־��ô�ᶨ .�ð� ,�͸����� .�ҵ������ǵ������Ƕ��˹��ڶ���˽����������յ�����ɭ��ʱ ,��С�ı�����������ϵ� .ֻ��û�뵽��ȴ������ôһ��С���Ӹ�ɱ��....���� !��Ȼ���ܽ��������ɱ�� ,���һ�����ֻ����Ӧ��Ҳ�������°� ?������������....���ȥ�����Ǹ�ֻ����ҩ����ͷ�Ӱ� .\n";
  }
  }
  else
  {
   return "�㲻���û�����..?�������..?\n";
  }
}
string do_ask2()
{
  int me;
  object who;
  who = this_player();
  if(who->query("quests/badroar")!=1)
  {
    return "һ��С��ර��뵽ɭ��ȥ ?������!?\n";
  }
  else
  {
    who->set_temp("marks/allow",1);
    return "��ȥɭ�� ?�� ,û���� !ȥ����ԯ�����ǶĹ�˵�� !\n";
  }
}

