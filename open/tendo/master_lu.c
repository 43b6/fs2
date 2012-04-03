#include <ansi.h>
inherit NPC;
inherit F_MASTER;
string magic1();
string magic2();
string magic3();
string do_area();
string do_array();
string do_howgo();
string do_tenman();
void create()
{
        set_name("½���",({"master lu","master","lu"}));
        set("long", 
"��������۵����ţ����ް߰ף�һ�Գ�ü���ա���������Ӧ��
�����ˣ�������ȴ��Ȼ������ȣ���ʮ���������ʮ�������
�ˡ���˵��������ͨ"HIG"�׾�"NOR"��"HIG"��ׯ"NOR"�����һ�����"HIG"����"NOR"����һ�ࡣ\n"
);
       
        set("gender","����");
        set("class","taoist");
        set("nickname",MAG"�����ϵ�"NOR);
        set("combat_exp",4500000);
        set("attitude","friendly");
        set("age",88);
        set("title","�����������");
        set("str",20);
        set("cps",30);
        set("cor",25);
        set("per",25);
        set("int",35);
        set("con",25);
        set("spi",25);
        set("kar",40);
        set("max_s_kee",100);
        set("s_kee",100);
        set("sec_kee","tiger");
        set("max_kee",6000);
        set("kee",6000);
        set("max_sen",3500);
        set("sen",3500);
        set("max_gin",2200);
        set("gin",2200);
        set("force",2500);
        set("inquiry",([
        "����" : (:do_area:),
        "������" : (:do_array:),
        "������" : (:do_howgo:),
        "ʧ������" : "�������������˼��ʱʧ��ģ���Ҳ��֪����η���",
        "�׾�" : "��ȥ���鷿��������ʦ�Ҫһ�����ж��ɡ�",
        "��ׯ" : "���鷿����м��ᷭ��������ȥ��������ʦ�Ҫ��������",
        "��������" : (:do_tenman:),
          ])); 
        set("max_force",2500);
        set("max_mana",3000);
        set("mana",3000);
        set("atman",3000);
        set("max_atman",3000);
        set("mana_factor",60);
        set_skill("literate",40);
        set_skill("cure",90);
        set_skill("taoism",90);
        map_skill("cure","taoism");
        set_skill("force",60);
        set_skill("gforce",100);
        map_skill("force","gforce");
        set_skill("dodge",80);
        set_skill("g-steps",100);
        map_skill("dodge","g-steps");
        set_skill("magic",100);
        set_skill("gmagic", 100);
        map_skill("magic", "gmagic");
        set_skill("whip",105);
        set_skill("gwhip",100);
        map_skill("whip","gwhip");  
        set_skill("parry",70);
        map_skill("parry","gwhip");
        set_skill("spells",120);
        set_skill("necromancy",100);
        map_skill("spells","necromancy");
        set_skill("move",80);
        map_skill("move","g-steps");
        set("spells/feeblebolt/level",90);
        set("spells/missible/level",100);
        set("spells/hardshell/level",90);
        set("spells/invocation/level",100);
        set("spells/stopmove/level",1);
        set("spells/lightfire/level",1);
        set("spells/flee/level",60);
        set("spells/manabody/level",1);
        set("force_factor",10);
        set("guild_master",1);
        set("chat_chance_combat",200);
        set("chat_msg_combat",({
         (: magic1 :),
         (: magic2 :),
         (: magic3 :),
        }));
        setup();
        create_family("�����",2,"������");
        carry_object("/open/tendo/obj/red_dragon_chain")->wield();
        carry_object("/open/tendo/obj/lucloth")->wear();
        carry_object("/open/tendo/obj/luboot")->wear();
        add_money("gold",20);
}
int accept_object(object me, object obj)
{
        if( obj->query("name") == "ʧ������" )
        {
          command("pat "+getuid(me));
          command("say ̫����, �����ڤ�����޵������û�������л�ˡ�\n");
          if( me->query("family/family_name") == "�����" )
          {
            command("say ��Ȼ��Ѱ�������й�, �ұ㽫�������������صľ�ѧ��������ɡ�\n");
            write(me->query("name")+"����½�����˵�Ŀھ���������һ�顣\n\n"+
            "������������ǻ�Ȼ��ͨ, ȫ������Ѹ����תһ���졣\n\n"+
            "��ѧ���������������صľ�ѧ�����\ս������\n\n");
            if( me->query("force") < me->query("max_force") )
            me->set("force",me->query("max_force"));
            me->set("marks/god-kee",1);
            me->set("title",HIY"���"HIR"�մ�����"NOR);
          }
          destruct(obj);
        }
        else
          command("? "+getuid(me));
        return 1;
}
void attempt_apprentice(object ob)
{
        object whip;
        if(this_player()->query("class")!="taoist")
        {
                command("say ����־��ͬ��������Ѱ��ʦ�ɡ�\n");
                return;
        }
        if(this_player()->query("kar") < 25)
        {
                command("say ������Ե�޷ݣ�������Ѱ��ʦ�ɣ�\n");
                return;
        }
        command("hmm");
        command("recruit "+ob->query("id"));
        message("system",HIG"½��縧��Ц����  �����֮����������֮��  ��

��������У��ֶ���һλ�ɷ���ǵ���ʿ����\n"NOR,users());
        
        command("say ���������������ԣ��ǲ����Ѿ�����Ҫ���˽��֡�");
        write("\n");
        command("hmm");
        command("say �������ȥ��־��ʦ����������õĵ�����");
}
string do_area()
{
  object who=this_player();
  if(who->query("class")!="taoist")
        return ("��....����֮ѧ���������������������˵��ġ�");
  return (
"˵��������"HIW"������"CYN"����Ϊʦ����������Ϊ�����ų�������"NOR"");
}
string do_array()
{
  object who=this_player();
  if(who->query("class")!="taoist")  
    return ("�㲻�Ǳ��ŵ��������ʲô��");
    who->move("/open/center/room/inn");
  if(!who->query_temp("asked")) {
    who->set_temp("asked",1);
    return ("\nҲ��....���Ȼ��Ϊ��ʿ��Ҳ��֪�����¡�½���������˼��˵��,
��������������"HIW"������"CYN"���ǵ���ħ�����--ħ�۶���������������
��ʱ������ʦү��ӡ���ǵġ���������Σ�����ޣ�Ϊʦ���صز���
�ڴ˼��Ա������Է�������֦������ʦү�����ǰ��һ��ԡѪ��ս��"NOR"");
  }
  return (
"����ɱ��ɱ�ƣ���ר����ħ������衣
��ɱ������ ��������������Ϊ��ħ��Ϯ��������

����½������˫�ص�˵�� : �������Ϊ�������ǣ��ɰ�����
�����������пɵ���������п���ħ�����м��мǡ�");
}
string do_tenman()
{
if (this_player()->query("quests/shasword")==2)
{
command("say �������������ÿ���������,�ں���ʥ֮�����γɵ�һ����˵����!");
}
else command("say ����û����");
}
string do_howgo()
{
 object who=this_player();
  if(who->query("class")!="taoist")
        return (
"�����˱��Ż��ܣ�"+RANK_D->query_respect(who)+"���ض����ˡ�");
  return (
"�������������������쳣�������ǵ��꣬��ʦүҲ���˾�ţ����֮���Ž����ס��
 ������һֻǿ��������������������!!");
}
int accept_fight (object who)
{
command("conj hardshell");
return 1;
}
int accept_kill(object who)
{
who=this_player();
kill_ob(who);
command("conj hardshell");
command("say ʩ����ִ�����,�ݹ�ƶ������������!!");
return 1;
}
string magic1()
{
if(this_object()->query("kee")<=3000) {
          command("cast king invocation");
        }  
        return "\n";
}
string magic2()
{
if(random(2)<=1) 
command("cast missible");
else command("cast feeblebolt");
return "\n";
}
string magic3()
{
if(random(3)<=2)
command("cast stopmove");
return "\n";
}
void die()
{
   object cloth;
   object winner = query_temp("last_damage_from");
   string name = winner->query("name");
   string class1 = winner->query("family/family_name");
   new("/open/tendo/obj/lucloth")->move(winner);
   tell_object(users(),HIW"          
         ½���"HIG"̾��:"HIC"����"HIG"��δ�һ�,"HIR"ڤ������"HIG"δ��,
                    ��,�Ҿ���ܸ�"+HIB+class1+HIG"����"+HIB+name+HIG+"֮��,
                    �Ҳ����İ�!!\n\n
              "HBCYN"һ���׹������ɽֱ�����\n"NOR);
::die();
}
