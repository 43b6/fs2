#include <ansi.h>
inherit NPC;
void create()
{
        set_name("�ɽ�����",({"sword man","man"}));
        set("long","ħ�����ػ��ߣ��ɻ�Ӱϵͳcopy��\n");
        set("gender","����");
        set("combat_exp",3000000);
        set("sec_kee","god");
        set("attitude","heroism");
        set("get_sha_sp",1);
        set("max_s_kee",1000);
        set("s_kee",1000);
        set("title",HIW"����Ӱ��"NOR);
        set("age",60);
        set("class","swordsman");
        set("family/family_name","�ɽ���");
        set("force",500000);
        set("max_gin",9000);
        set("max_kee",50000);
        set("max_sen",9000);
        set("clan_kill",1);
        set("bellicosity",3000);
        set("max_force",500000);
        set("force_factor",10);
        set("str",45);
        set("cor",45);
        set("mpower",1);
        set_skill("shasword", 120);
        set_skill("literate",120);
        set_skill("sha-steps",120);
        set_skill("dodge",120);
        set_skill("shaforce",120);
        set_skill("parry",120);
        set_skill("sword",120);
        set_skill("force",120);
        map_skill("sword","shasword");
        map_skill("parry","shasword");
        map_skill("force", "shaforce");
        map_skill("dodge", "sha-steps");
        set_temp("apply/defense",100);
        set_temp("apply/armor",100);
        setup();
       carry_object("/open/gsword/obj/silver_sword")->wield();
        add_money("gold", 20);
}
void heart_beat()
{
object me,room,*target;
int i,j;
me=this_object();
room=environment(me);
target=me->query_enemy(room);
if(i=sizeof(target)) {
if(random(100) > 50)
{
if(random(9) >= 5)
{
message_vision(HIY"�ɽ������ý�����������һ������ʱ�˼����ǣ�\n"NOR,me);
for(j=0;j < i;j++) {
target[j]->add("kee",-1600); }
   }
   else
   {
message_vision(HIC"�ɽ���������һЦ��˲ʱ��Ϣ�ȹ̡�\n"NOR,me);
if(random(9) >= 5) {
me->receive_curing("kee",5000);
me->receive_heal("kee",5000); }
    me->clear_condition();
   }
  }
}
  ::heart_beat();
  }
int accept_fight(object who)
{
 command("say �߿����ң�\n");
 return 0;
}
int accept_kill(object who)
{
 int i;
 object guard;
 who=this_player();
 command("kill "+who->query("id"));
 command("cmd god_kee");
if( !present("sword1 man",environment(who)))
        {
for(i=0;i<1;i++)
          {
guard=new(__DIR__"npc38-2");
guard->move(environment(who));
guard->kill_ob(who);
          }
        }
 command("say �ֵ��ǳ���ɱ�а� !!");
 return 1;
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
if(me->query("quest/start_game")< 39)
       {
        message_vision(HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"����ʮ�˲���������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"����ʮ�Ų���������"HIG"��"HIW"��
	"NOR,me);
	me->set("quest/start_game",39);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}