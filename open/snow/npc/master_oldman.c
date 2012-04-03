#include <ansi.h>
inherit NPC;
inherit F_MASTER;
void create()
{
        set_name("��������",({"oldman"}));
set("long", "һ��������ȫ����_�_�����ˣ����ϻ���һ���������������Ǳ���������ġ�\n");
        set("gender", "����" );
        create_family("ħ��Ī��",1," ");
        set("title","");
        set("age",70);
        set("str",44);
        set("class","blademan");
        set("guild_class","blademan");
        set("cor", 30);
        set("cps", 27);
        set("int", 24);
        set("max_force",3000);
        set("force",3000);
        set("force_factor",15);
        set("kee",5000);
        set("max_kee",5000);
        set("bellicosity", 1500);
        set_skill("force", 100);
        set_skill("blade", 100);
        set_skill("dodge", 70);
        set_skill("move", 70);
        set_skill("powerforce", 100);
        set_skill("dragon-blade", 120);
        set_skill("parry", 95);
        map_skill("parry","dragon-blade");
        map_skill("blade","dragon-blade");
        map_skill("force","powerforce");
        set("combat_exp", 1500000);
        set("chat_chance_combat",80);
        set_temp("apply/armor",90);
        set_temp("apply/damage",90);
        set("chat_msg_combat",({
        (: perform_action, "blade.power-dest" :),
      }));

        set("inquiry", ([
"����":
 "�����������ǧ�꺮��ʯ����ģ�һ������ǿ����ϵġ�\n",
           "ǧ�꺮��ʯ":
"���Ǿ���ǧ���������ɵļ�Ӳʯ�飬�����������������Ȼ��
�����ϡ�\n",
           "�������":
"��˵�˼�������������а�����ϡ���аʯ�����Ի���ǧ�꺮��ʯ��\n",
           "������а":  "��˵������а��������éɽ�����ϡ�\n",
           "��аʯ":   "��аʯ�ڶ��³�˵����\n",
        ]) );

        add_temp("apply/attack",30);
        add_temp("apply/dodge",30);
        setup();
        carry_object("/daemon/class/blademan/obj/iceblade")->wield();
}
void attempt_apprentice(object ob)
{
        if(this_player()->query_skill("dragon-blade",1)<105)
        {
        command("say ��������ҹ�����\n");
        return ;
        }
        command("smile");
        command("say �ţ���Ȼ����������ӽ���Ϸ����Դ������㡣");
        command("say ����ħ����ѧ�����⴫���мǣ��мǡ�");
        ob->delete("family");
        command("recruit "+this_player()->query("id"));
        this_player()->set("title","ħ����������");
        this_player()->set("no_recruit", 1);
        this_player()->delete("can_apprentice");
        message("system",HIB"ħ��Ī��������Ц:
������������ħ��һ������Ѫ���ɺӡ�������ƥ�С�\n"NOR,users());
        return ;
        }
int accept_object(object who,object ob)
{
    string ob_id;
    ob_id=ob->query("id");
    if(who->query("quests/blade_out")==0)
    {
    if(ob_id=="stone")
    {
    destruct(ob);
    command("say ��û����ɣ��㾹Ȼ�ܽ���аʯ�õ��֣�");
    this_player()->set("give_1",1);
    }
    if(ob_id=="snake sword")
    {
    destruct(ob);
    command("say ̫���ˣ�����������Ҫ�Ķ�����");
    this_player()->set("give_2",1);
    }
    }
if(who->query("give_1")==1 && who->query("give_2")==1)
{
    command("say ̫���ˣ�");
    message_vision(
             HIY
"$n����аʯ������ע�������а֮�У�Ȼ���˾�һ�����������ϡ�\n" NOR,this_player(),this_object());
    CHANNEL_D->do_channel(this_object(),"mud",HIR
"Զ������ħ��Ī��Ĵ��:\n�������ˣ�����������\n���³������������Űɣ���Ҫһѩ��ʮ�������֮�ޣ�\n"NOR);
           command("say ��л���ͷ����ң������ȥ���˶���������");
           command("say ���������������ң��ðɣ��ҽ��������������㡣");
           this_player()->add("max_force",100);
           this_player()->add("force",100);
           who->set("quests/blade_out",1);
           who->delete("give_1");
           who->delete("give_2");
   }
      else
{
             if(ob_id!="snake sword" && ob_id!="stone" ) 
             return 1;
}
}
