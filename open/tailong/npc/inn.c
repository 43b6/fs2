#include <ansi.h>
inherit NPC;
inherit F_MASTER;
string six_sp();
void create()
  {
        set("class", "scholar");
        set_name("����", ({ "master inn", "master", "inn" }) );
        set("title","�����µھ���ס��");
        set("nickname", HIR"��������"NOR);
        set("gender", "����");
        set("age", 200);
        set("attitude", "heroism");
        set("long",
        "����ǰ���Ǵ�����ǵ���ѧ���������¡���ס��----�����ʦ, \n"
        "��˵���������������뻯��, �����ܺ�����粢�۵�, ֻ����ֶ\n"
        "�������, ����������, ��δ���˼�ʶ�����������书....\n");
        set("str", 48);
        set("cps", 40);
        set("per", 34);
        set("int", 38);
        set("kar", 16);
        set("combat_exp",2000000);
        set("max_kee",4500);
        set("kee",5000);
        set("force"       , 4000);
        set("max_force"   , 4000);
        set("force_factor", 30);
        set("score"       , 200000);
        set("s_kee",1000);
        set("marks/six_sp",3);
        set("max_s_kee",1000);
        set("sec_kee","god");
        set("inquiry",([
                 "����":"�����������������̱ܾ��ڴ�, ����ʩ����Ҫȥ������\n",
                 "��\�ٴ�ʦ":"��ʦ�������ڿ�ο�\����, ��˵��һ������ǿ���书\n",
                 "������":"���������Ҵ��������ͷʹ������, �����书���, Ϊ����ʮ���侲����, ʮ���Ѳ�\n",
                 "����":   (: six_sp :),
          ]));
        set("functions/handwriting/level",65);
       set("max_gin",5000);
       set("max_sen",5000);
       set("gin",5000);
       set("sen",5000);
       set_skill("cure",100);
       set_skill("move",80);
       set_skill("unarmed", 100);
       set_skill("force",150);
       set_skill("parry",100);
       set_skill("dodge",100);
       set_skill("literate",100);
       set_skill("linpo-steps",120);
       set_skill("six-fingers",120);
       set_skill("sunforce",150);
       map_skill("force", "sunforce");
       map_skill("unarmed", "six-fingers");
       map_skill("dodge", "linpo-steps");
       map_skill("parry", "six-fingers");
       map_skill("stabber", "six-fingers");
       set("chat_chance_combat",40);
       set("chat_msg_combat",({
            (: perform_action, "unarmed.handwriting"   :),
            (: "cmd god_kee"   :)
        }));
        create_family("�μ�", 5, "������");
        setup();
//            carry_object(__DIR__"")->wear();
//            carry_object(__DIR__"")->wear();
//            carry_object(__DIR__"")->wear();
//            carry_object(__DIR__"")->wear();
//            carry_object(__DIR__"")->wear();
//            carry_object(__DIR__"")->wear();
//            carry_object(__DIR__"")->wear();
//            carry_object(__DIR__"")->wear();
//            carry_object(__DIR__"")->wield();
        add_money("gold",40);
}

int accept_object(object who, object ob)
{
  string name=who->query("name");
  if( ob->query("id") == "six book" && who->query_temp("six_sp_quest")==10)
  {
    destruct(ob);
    tell_object(users(),HIY"
                 ������˵��:"HIW"
                             �����"HIG+name+HIW"Ϊ�������³�ȥ��, ��ر���
                               ���Ľ��ձ㽫�񽣰��御������, 
                               ������ն����ħ, ���������ϵ�����!!��
"NOR);
    who->set("marks/six_sp",3);
    who->set("quest/4-badman",1);
    who->set("title",HIW"������Ͼ�������"NOR);
  }

else if( ob->query("id") == "tai mark" && who->query_temp("six_sp_quest")==8)
  {
    destruct(ob);
    say(HIY"�����ʦ˵��:�������˵�����ڡ�����롯, ���Ƽ�Ȼ��ʩ����, ����о�����ҵ, 
             ���¾��ෳʩ��, ��ض�������񽣾�!!\n"NOR);
    say(HIY"�����ʦ��˵:��������ƽ�ϳ�����, ��ȥ��!!\n"NOR);
    who->set_temp("six_sp_quest",9);
  }
}
int accept_kill(object who)
{
 command("say ���ıƲ�����, ֻ�к�ʩ�����ϼ���!\n");
 kill_ob(who);
 command("cmd god_kee");
 return 1;
}
void heart_beat()
{
        if( random(4) < 1 ){
        if( is_fighting() ){
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
        }
        else{
                if( query("eff_kee") < query("max_kee") )
                        command("exert heal");
        }
        }
     ::heart_beat();
}

string six_sp()
{
 object me;
 me=this_player();
 if(me->query_temp("six_sp_quest")!=9)
  {
   return "�������������ܰ�, �������״�������...\n";
  }
 say(HIY"�����ʦ��:���ƺ���δ�����񽣰���, �ұ㴫�㡸����������������\n");
 say(HIY"           ������ƾ���ж�ر���!!\n");
 me->set("marks/six_sp",1);
 me->set("title","�������׼Ҹ���");
}
