#include <ansi.h>
inherit NPC;

void create()
  {
        set("class", "fighter");
        set_name("������", ({ "npc3"}) );
        set("nickname","��ɽ�ɵ��ߴ�������");
        set("title", "������������");
        set("gender", "����");
        set("age", 45);
set("clan_kill",1);
set("del_delay",1);
        set("attitude", "hero");
        set("long",
"
cp from ��ɽ�ɵ��ߴ�������....�ݶ�...
");  		
        set("str", 48);
        set("cps", 40);
        set("per", 34);
        set("int", 38);
        set("kar", 16);
        set("fire_strike",1);
        set("super_fire",1);
        set("combat_exp",5000000);
         set("max_kee",15000);
      set("kee",15000);
        set("force"       , 6000);
        set("max_force"   , 7000);
        set("force_factor", 40);
        set("score"       , 200000);
         set("s_kee",400);
set("env/��ɽ����","YES");
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
set("chat_chance_combat",10);
        set("chat_msg_combat",({
            (: perform_action, "force.kang_kee"   :),
        }));
        setup();
            carry_object("/daemon/class/fighter/ywleg")->wear();
            carry_object("/daemon/class/fighter/ywboots")->wear();
            carry_object("/daemon/class/fighter/ywcloth")->wear();
            carry_object("/daemon/class/fighter/ywgem")->wear();
            carry_object("/daemon/class/fighter/ywhelme")->wear();
            carry_object("/daemon/class/fighter/ywhand")->wear();
            carry_object("/daemon/class/fighter/ywsu")->wear();
            carry_object("/daemon/class/fighter/armband")->wear();
               carry_object("/daemon/class/fighter/star");
                carry_object("/daemon/class/fighter/figring")->wield();
        add_money("gold",40);
}
int heal_up()
{
        if (!is_fighting() ) {
             message_vision (HIW"ϵͳ��ս��ֹͣ��$N�����У���\n"NOR, this_object ());
             destruct(this_object());
             return 1;
        }
        return ::heal_up() + 1;
}

int accept_fight(object who)
{
 command("say �����ɣ���\n");
 who=this_player();
 command("cmd usekee "+who->query("id"));
command("charge "+who->query("id"));
 return 1;
}
int accept_kill(object who)
{
 command("say �����ɣ���\n");
 who=this_player();
 kill_ob(who);
command("charge "+who->query("id"));
 command("cmd usekee "+who->query("id"));
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

void unconcious ()
{
 object me=query_temp("last_damage_from");
if(!present("fight_card",me))
{
tell_object(me,"\n\nϵͳ��������ûЯ����Ƭ�������޷���¼ս����\n");
destruct (this_object ());
}
else
if(!me->query("quest/start_game"))
{
tell_object(me,"\n\nϵͳ��������û����ʽ�Ǽǣ������޷����䡣\n");
destruct (this_object ());
}
else
if(me->query("quest/start_game")< 4)
       {
        tell_object(users(),HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"��������������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"���Ĳ���������"HIG"��"HIW"��
	"NOR);
	me->set("quest/start_game",4);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}