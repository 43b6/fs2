// sell_officer.c
#include <ansi.h>
inherit NPC;
void create()
  {
        set("class", "officer");
        set_name("���ܹ�", ({ "officer wu", "officer"}) );
        set("title","��ͥ����");
        set("nickname", "��ͼ���ѧʿ");
        set("gender", "����");
        set("age", 45);
        set("clan_kill",1);
        set("attitude", "hero");
        set("long",
        "���ܹ�Ϊ��ͥ����ͼ���ѧʿ����ѧʶΪ���֡����Z�е�һ�ȵ��˲�\n");
       set("str", 48);
       set("cps", 40);
       set("per", 34);
       set("int", 38);
       set("kar", 16);
       set("fire_strike",1);
       set("super_fire",1);
       set("combat_exp",5000000);
       set("max_kee",9500);
       set("kee",12000);
       set("force"       , 6000);
       set("max_force"   , 7000);
       set("force_factor", 40);
       set("score"       , 200000);
       set("s_kee",400);
       set("env/���","YES");
       set("max_s_kee",1000);
       set("sec_kee","tiger");
       set("functions/kang_kee/level",100);
       set("max_gin",5000);
       set("max_sen",5000);
       set("gin",5000);
       set("sen",5000);
       set_skill("cure",40);
       set_skill("move",50);
       set_skill("unarmed", 120);
       set_skill("force",120);
       set_skill("parry",50);
       set_skill("dodge",50);
       set_skill("fire-kee",100);
        set_skill("literate",40);
        set_skill("henma-steps",100);
        set_skill("literate",30);
        set_skill("lungshan",100);
        set_skill("haoforce",100);
        map_skill("force", "haoforce");
        map_skill("unarmed", "lungshan");
        map_skill("dodge", "henma-steps");
        map_skill("parry", "fire-kee");
        set("chat_chance_combat",65);
        set("chat_msg_combat",({
            (: perform_action, "force.kang_kee"   :),
            (: "cmd god_kee"   :)
        }));
        setup();
        add_money("gold",20);
}

int accept_object(object who, object ob)
{
  object mid;
  string head_name;
  head_name=ob->query("id");
  switch(head_name)  {
  case "fire-king-head":
       command("cong");
       command("say ����!!����!!��ͥ��һ�ͽ�ķ���ħ������ͷ!!!");
       command("say ���������书��ǿ!!!!����75000�����ͽ�������!!!\n");
       mid=new("/obj/money/thousand-cash");
       mid->add_amount(7499);
       mid->move(who);
       break;
  case "dragon-head":
       command("cong");
       command("say ����!!����!!��ͥ��һ�ͽ�Ļƽ��������ͷ!!!");
       command("say ���������书��ǿ!!!!����6500�����ͽ�������!!!\n");
       mid=new("/obj/money/thousand-cash");
       mid->add_amount(649);
       mid->move(who);
       break;
  case "black-ghost-head":
       command("cong");
       command("say ����!!����!!ħ��ڰ�˫ɲ����ͷ!!!\n");
       command("say ���������书��ǿ!!!!����6000�����ͽ�������!!!\n");
       mid=new("/obj/money/thousand-cash");
       mid->add_amount(599);
       mid->move(who);
       break;
  case "white-ghost-head":
       command("cong");
       command("say ����!!����!!ħ��ڰ�˫ɲ����ͷ!!!\n");
       command("say ���������书��ǿ!!!!����6000�����ͽ�������!!!\n");
       mid=new("/obj/money/thousand-cash");
       mid->add_amount(599);
       mid->move(who);
       break;
  case "seven-dark-head":
       command("cong");
       command("say ����!!����!!ħ����ħ������ͷ!!!\n");
       command("say ���������书��ǿ!!!!����5000�����ͽ�������!!!\n");
       mid=new("/obj/money/thousand-cash");
       mid->add_amount(499);
       mid->move(who);
       break;
  case "mechoufen-head":
       command("cong");
       command("say ����!!����!!�ڷ�˫ɲ֮÷�������ͷ!!!\n");
       command("say ���������书��ǿ!!!!����1300�����ͽ�������!!!\n");
       mid=new("/obj/money/thousand-cash");
       mid->add_amount(129);
       mid->move(who);
       break;
  case "lin-head":
       command("cong");
       command("say ����!!����!!ʥ�����֮�ֺ�������ͷ!!!\n");
       command("say ���������书��ǿ!!!!����7500�����ͽ�������!!!\n");
       mid=new("/obj/money/thousand-cash");
       mid->add_amount(749);
       mid->move(who);
       break;
  case "sa-head":
       command("cong");
       command("say ����!!����!!��ħͷ�����ӵ���ͷ!!!\n");
       command("say ���������书��ǿ!!!!����7500�����ͽ�������!!!\n");
       mid=new("/obj/money/thousand-cash");
       mid->add_amount(749);
       mid->move(who);
       break;
  case "tiger-head":
       command("cong");
       command("say ����!!����!!ƽ�ϳǶ����޵���ͷ!!!\n");
       command("say ���������书��ǿ!!!!����10�����ͽ�������!!!\n");
       mid=new("/obj/money/thousand-cash");
       mid->add_amount(0);
       mid->move(who);
       break;
  case "zhang-z-head":
       command("cong");
       command("say ����!!����!!������ͷĿ�ż̵���ͷ!!!\n");
       command("say ���������书��ǿ!!!!����400�����ͽ�������!!!\n");
       mid=new("/obj/money/thousand-cash");
       mid->add_amount(39);
       mid->move(who);
       break;
  case "liu-head":
       command("cong");
       command("say ����!!����!!���ֶ�ͷĿ���ŵ���ͷ!!!\n");
       command("say ���������书��ǿ!!!!����600�����ͽ�������!!!\n");
       mid=new("/obj/money/thousand-cash");
       mid->add_amount(59);
       mid->move(who);
       break;
  case "ra-head":
       command("cong");
       command("say ����!!����!!���ִ�ͷĿ�װԵ���ͷ!!!\n");
       command("say ���������书��ǿ!!!!����2000�����ͽ�������!!!\n");
       mid=new("/obj/money/thousand-cash");
       mid->add_amount(199);
       mid->move(who);
       break;
  default :
       command("say �������ѽ!!����ƭ��ͥ����ѽ!!!���ҹ�!!!!\n");
       break;
  }
       destruct(ob);
       return 1;
}
