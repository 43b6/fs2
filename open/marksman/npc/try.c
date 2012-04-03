// master_tor.c made by adam..
// ������ǰ�῿��-by nike-
#include <ansi.h>
#include <marksman.h>
inherit NPC;
inherit F_MASTER;


void create()
 {
        set("class", "marksman");
set_name("���", ({ "master lee", "master", "lee" }) );
        set("title","�����ɵڶ���������");
        set("nickname",HIC "�Ķ���ʯ"NOR);
        set("gender", "����");
set("max_kee",5000);
        set("age", 55);
        set("attitude", "heroism");
        set("long","���Ϊ�Ŵ�����֮һ������һ�δ����У��Ѽ����ʯͷ�ν֮��̾..\n");
        set("str", 18);
        set("cps", 30);
        set("per", 10);
set("cor",30);
        set("int", 40);
        set("kar", 16);
set("combat_exp",2000000);
set("bellicosity",5000);
set("force",8000);
set("max_force",8000);
set("max_atman",5000);
set("atman",5000);
set("max_s_kee",300);
set("s_kee",200);
     set("sec_kee","phoenix");
set("force_factor",30);
        set("score"       , 200000);
set_skill("force",80);
set_skill("archery",120);
set_skill("god-shooting",100);
set_skill("magic",20);
set_skill("move",70);
set_skill("parry",70);
set("functions/ten_kee/level",100);
set_skill("dodge",70);
set_skill("literate",40);
set_skill("unarmed",20);
        set_skill("iceforce",100);
set("no_lyssa",1);
        set_skill("rain-steps",100);
set_skill("riding",80);
        map_skill("force", "iceforce");
        map_skill("dodge", "rain-steps");
        map_skill("parry", "rain-steps");
        map_skill("archery","god-shooting");
        map_skill("move","rain-steps");
set("chat_chance_combat",100);
                set("chat_msg_combat", ({
(: perform_action("archery.ten_kee") :)
        }));


        create_family("������", 2, "������");


        setup();
carry_object(C_OBJ"/arrow-8");
carry_object(C_OBJ"/bow-10")->wield();
        add_money("gold",10);
}


void init()
{
add_action("do_level","level");
}
int do_level(int lv,object me)
{
me = this_player();
lv = (me->query("combat_exp") / 100000);
if(me->query("family/family_name") != "������")return notify_fail("���˵:���!�㲻���ҵ��ӡ�\n");
if(me->query("level") > lv)
{
write("���˵: �㻹������������Ŭ����!!\n");
}else{
write("���˵: ��ϲ�������ˡ�\n");
me->set("level",lv);
}
return 1;
}

void attempt_apprentice(object ob)
{
        if(this_player()->query("class")!="marksman")
        {
                command("sigh");
                command("say �㲻�����֣��Ҳ������㡣\n");
                return;
        }
      if((int)ob->query("str") <16 )
{
          command("sigh");
          command("say �������������������һ�������..\n���˹�֮"+ RANK_D->query_respect(ob) + "�������ƺ����ˣ�\n");

return;
        }

      command("hmm");
new(C_OBJ"/bow-1")->move(ob);
new(C_OBJ"/come")->move(ob);
command("say ����ѹ������ӣ��ɲ�Ҫ�ò�����!");
      command("pat" + ob->query("id"));
      command("recruit "+ob->query("id"));
ob->set("appraise",random(4)+1);
message("system",HIR "���Ц�� :\n
      "HIW"" +this_player()->name()+ ""NOR""HIR"���������� !\n
      ���ձؿɳ�Ϊһ��������!\n
      ��Ϊ��������!!\n\n"NOR,users());

ob->set("Lbird-shop","YES");
}
int accept_kill(object ob)
{
 command("say �Ϸ����û�����ˣ��Ǿ�����һ����!");
 command("say ������!!");
 command("cmd holdup arrow with bow");
 kill_ob(ob);
 command("cmd usekee "+ob->query("id"));
command("supershoot");
command("perform archery.ten_kee");
return 1;
}
int accept_fight(object ob)
{
command("say �Ǻð�!!�Ϸ���������");
command("cmd holdup arrow with bow");
 fight_ob(ob);
 command("cmd usekee "+ob->query("id"));
command("supershoot");
command("perform archery.ten_kee");
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
void greeting(object ob)
{
if(ob->query("family/family_name")=="������")
{

if(!present("come",ob))
{
new(C_OBJ"/come")->move(ob);
command("hmm");
command("say ������?������?");
command("say �ٸ���һ����");
}

if(!present("bow",ob))
{
new(C_OBJ"/bow-1")->move(ob);
command("hmm");
command("say ����ô������!!");
command("say �ٸ���һ�ѣ���ҪŪ����!");
}
}
}
void die()                                                                 
{    
        object winner = query_temp("last_damage_from");

        tell_object(users(),HIW"
    ��Ȼ��"GRN"��ɳ��"HIW"֮�����һ���׹⣬ӳ�ų��գ�ֱ�ܴ���ʡ�����\n
        �����������ˣ�"HIY"���"HIW"����ǰ�Ȼ̾��������\n
            ��������������...��������һ��"HIC"�ɽ���"HIW"����Ȼ����˲���һ��...��\n
                �������µ�"HIC"���ɽ�����"HIY"���"HIW"������"HIR"��"+winner->name()+"��"HIW"��һ�л�����"HIY"������"HIW"��...\n
\n\n"NOR);
        ::die();
}
