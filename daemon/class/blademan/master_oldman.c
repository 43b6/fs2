#include <ansi.h>
#include <combat.h>
#include </open/open.h>
inherit NPC;
inherit F_MASTER;
void create()
{
        set_name("[1;34mħ��Ī��[0m",({"oldman"}));
set("long", "һ��������ȫ����_�_�����ˣ����ϻ���һ���������������Ǳ���������ġ�\n");
        set("gender", "����" );
        create_family("ħ��Ī��",1,"����ʼ��");
        set("family/family_name","ħ��Ī��");
        set("have_book",1);
        set("title","ħ��ѩ��������");
        set("age",70);
        set("env/ħ����ն","YES");
      set("mpower",2);
        set("str",45);
        set("class","blademan");
        set("guild_class","blademan");
        set("cor", 30);
        set("cps", 30);
        set("int", 25);
        set("max_gin",1000);
        set("max_sen",1000);
        set("max_force",4000);
        set("force",4000);
        set("force_factor",30);
        set("kee",5000);
        set("score",100000);
        set("max_kee",5000);
        set("bellicosity",3000);
        set_skill("cure",60);
        set_skill("riding",100);
        set_skill("force", 100);
        set_skill("blade",120);
        set_skill("dodge", 70);
        set_skill("move", 70);
        set_skill("powerforce", 100);
        set_skill("dragon-blade", 120);
        set_skill("parry", 100);
        map_skill("parry","dragon-blade");
        map_skill("blade","dragon-blade");
        map_skill("force","powerforce");
        set("combat_exp",1500000);
        set("chat_chance_combat",50);
        set_temp("apply/armor",100);
        set("chat_msg_combat",({
        (: perform_action, "blade.swy" :),
      }));
        set("inquiry", ([
"����":"�����������ǧ�꺮ʯ����ģ�һ������ǿ����ϵġ�\n",
"ǧ�꺮ʯ":"���Ǿ���ǧ���������ɵļ�Ӳʯ�飬�����������������Ȼ�޷����ϡ�\n",
"�������":"��˵�˼�������������а�����ϡ���аʯ�����Ի���ǧ�꺮ʯ��\n",
"������а":"��˵������а��������éɽ�����ϡ�\n",
"��аʯ":"��аʯ�ڶ��³�˵����\n",
"ʧ������":"�����ǿ����������һ�У���ϧ�����ѱ�Ī���ָ������ˣ�
������������������ܶ�������Ҿʹ�����ʧ�����塣",
"Ī����":"������ϲ����ͽ�ܣ���ϧ��������������ţ��ֶ�ȡ�ҵ������һʽ��
��������������Ҷ��Ӵ�ܣ��Ͳ�֪ȥ���ˣ�������������",
"����":"��������˵��ȥͶ������ѩ����ȥ�ˣ�Ŀǰռ��ħ��������Ҫ����",
"ħ����":"��ħ�����ڣ��Լ�ȥ�Ұɣ�",
"���֮��":"����......�����ҵ�����������ʱ���õ��䵶��\n",
"�䵶":"�ǰѵ����Ҹմ�����������δ����ħ��ʱ�������ˣ�����ʱ���Ѿ�����һϢ���������е�֪��ڣλ��֮��Ҳ֪����õĵ����С��������ꡯ��\n",
"��������":"�ڶ�ʮ��ǰ����³���ѩ��ɽһս���ǰѵ��������ˣ��˵��Ա���ص�ڣ��\n",
"��ڣ":"��...�����㲻���ʸ��ǰɡ�\n",
"�ʸ�":"ֻҪ���ܽ�ס�����У��ҾͰѵ�ڣλ�ø���˵(test �ʸ�)��\n",
"Ī��":"�����������Ѿã�������˵�д��ˣ����˺���һֱ��������ɣ�\n",
        ]));
        add_temp("apply/dodge",30);
        setup();
        carry_object("/daemon/class/blademan/obj/iceblade")->wield();
}
void attempt_apprentice(object ob)
{
if(this_player()->query_skill("dragon-blade",1)<105)
{
command("say ����������ѧ�����ˣ�������ң���������ҹ�����\n");
return ;
}
if(this_player()->query("have_book")!=1)
{
command("say ��Ȼ����������ѵ���һ��ˮ׼��������ȱ�ϳ˰��壡");
command("say ��ϧ���ұ��������еĵ��ף�ȴ��Ī���ָ������ˣ�");
command("say �������׷�صĻ����Ҿ�����Ϊͽ��������ħ�����ʧ�����壡");
return ;
}
        command("smile");
        command("say �ţ���Ȼ����������ӽ���Ϸ����Դ������㡣");
        command("say ����ħ����ѧ�����⴫���мǣ��мǡ�");
        ob->delete("family");
        command("recruit "+this_player()->query("id"));
if(this_player()->query("m_blade")==1) {
this_player()->set("title","[1;31mħ��[1;37m����ն��Ԫ��[1;35m����[0m"); } else {
        this_player()->set("title",HIC"ħ����������"NOR);
}
        this_player()->set("no_recruit", 1);
        message("system",HIB"ħ��Ī��������Ц:
\n������������ħ��һ������Ѫ���ɺӡ�������ƥ�С�\n"NOR,users());
        return ;
        }
int accept_object(object who,object ob)
{
string ob_id;
ob_id=ob->query("id");
if(who->query("quests/blade_out")==0||who->query_skill("dragon-blade",1)>=105)
{
if(who->query("evil-mblade")==1) {
if(ob_id=="bad-evil-mblade") {
command("say ̫���ˣ���������֮ǰ���䵶��");
command("say ��ϧ�����Ի٣���������ֻ�С�Ī�ơ����ޣ�");
command("say ��ȥ�����ɣ�");
command("give "+this_player()->query("id")+" bad-evil-mblade");
}}
if(ob->query("id")=="dragon-blade book"&&who->query("family/family_name")=="ħ����")
{
if(who->query("have_book")==0)
{
destruct(ob);
command("say �㾹�ܽ�����׷�أ���Ȼ�Ǹ�����֮�ţ�");
command("say �ã��Ҿͽ�����������ʧ�����塯�����㣡\n");
who->set("have_book",1);
}
}
if(ob_id=="stone"&&who->query_temp("give_1")==0)
{
destruct(ob);
command("say ��û����ɣ��㾹Ȼ�ܽ���аʯ�õ��֣�");
this_player()->set_temp("give_1",1);
}
if(ob_id=="snake sword"&&who->query_temp("give_2")==0)
{
destruct(ob);
command("say ̫���ˣ�����������Ҫ�Ķ�����");
this_player()->set_temp("give_2",1);
}
if(who->query_temp("give_1")==1&&who->query_temp("give_2")==1&&who->query("quest/blade_out/get_force")==0)
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
           who->set("quest/blade_out/get_force",1);
           return 1;
}
}
}
void init()
{
   add_action("do_test","test");
}
int do_test(string str)
{
        int i;
        object ob=this_object();
        object me=this_player();
if(me->query_temp("sublade")==1)
return notify_fail("��ڣ��·����޵�������ڣ�\n");
if(me->query("m_blade")!=1)
return notify_fail("����Ŀǰ����û�ʸ�������У���������ն�����ɣ�\n");
    if(str=="�ʸ�")
        {
          command("say ��! ���Ϸ���������! С����");
     for(i=0;i<7;i++)
COMBAT_D->do_attack(ob, me, ob->query_temp("weapon"), TYPE_QUICK);

          if( me->query("kee") > 500 )
          {
 command("say ��Ȼ���б��£������ܰ��Ұ��䵶ȡ�أ��Ҿʹ���˵���");
     command("say ��ڣ��·����޵�������ڣ������Ұɡ�");
            me->set_temp("sublade",1);
          }
          else
          {
            command("say ���ټ�ǿ�Լ����°ɣ�");
          }}
        else {
          write("����ʲô?!\n");
        }
return 1;
}
void heart_beat()
{
object me,room,*target;
int i,j;
me=this_object();
if( me->is_fighting() && random(100) > 60 && !me->query_temp("fast-dest") ) 
{
message_vision(HIC"\nħ��Ī�����ҩ�貹��Ѫ����\n"NOR,me);
me->receive_curing("kee",1500);
me->receive_heal("kee",1500);
me->delete_busy();
me->clear_condition();
   }
  ::heart_beat();
  }
void die()
{
	object winner = query_temp("last_damage_from");
	int j;
	if(!winner)
	{
	::die();
	return ;
	}
   if (winner && userp(winner))  {
tell_object(users(),HIR"\n\nħ��Ī������ŭ��\n\n\t�뵱���Ϸ򵶷���������ȴ����"+winner->name()+HIR"���ϣ�
\n\tû�뵽��Ȼ�бȶ���������������������˰��ˣ�\n\n"NOR);
   }
        :: die();
}

