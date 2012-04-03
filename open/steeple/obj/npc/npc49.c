
#include <ansi.h>
inherit NPC;
   
void create()
{
        set("long","
����ħ����ħ��֮ͳ���ߣ���ȫ���������������������������ͣ�ı����š�
��ϸһ����������������գ��ڹ�֮���ֱ����˼�顣�������Ϳ�����ѧ�����𹦡�
��������һ�����������汼�ڣ������ɵ����ɼ��������ɵġ������������
���������������γɼ�Ӳ���֡�
");
        set("gender","����");
        set("nickname",HIR"��������"NOR);
        set("title",HIW"����Ӱ��"NOR"ħ��֮��");
        set_name("����ħ��",({"fire king","king"}));
        set("combat_exp",20000000);
        set("attitude","aggressive");
        set("score",90000000);
        set("bellicosity",1000000);
        set("age",10000);
        set("max_force",1000000);
        set("force",5000000);
        set("max_kee",100000);
        set("kee",100000);
        set("max_gin",14000);
        set("max_sen",14000);
        set("str", 35);
        set("cor", 35);
        set("cps", 30);
        set("per", 30);
        set("int", 30);
        set("force_factor",45);
        set_skill("dodge",220);
        set_skill("force",250);
        set("clan_kill",1);     //������ɱ��׷ɱ
        set("no_mount",1);
        set("no_plan_follow",1);
        set_skill("move",280);
        set_skill("parry",250);
        set_skill("mogi-steps",200);
        set_skill("firestrike",220);
        set_skill("unarmed",220);
        set_skill("literate",200);
        set_skill("fireforce",250);
        set_temp("armor_vs_force",5000);
        map_skill("force","fireforce");
        map_skill("unarmed","firestrike");
        map_skill("dodge","mogi-steps");
        map_skill("move","mogi-steps");
        map_skill("parry","firestrike");

        set("functions/gold-fire/level",100);
        set("quest/gold-fire",1);
        set("quest/new_gold_fire",1);
        setup();
        carry_object("/data/autoload/mogi/fire-armor")->wear();
        carry_object("/data/autoload/mogi/fire-cloud-boots")->wear();
        carry_object("/data/autoload/mogi/fire-belt")->wear();
        carry_object("/data/autoload/mogi/daemon-cloak")->wear();
        carry_object("/data/autoload/mogi/fire-dragon")->wield();
        carry_object("/data/autoload/mogi/sspill")->set_amount(7);
        carry_object("/open/killer/headkill/obj/world_dag.c");
        add_money("gold",1000);
}

void init()
{
 ::init();
 add_action("do_cmd","cmd");
 add_action("do_exert","exert");
}
int do_cmd(string str){                 //ok by chan
 object who=this_player();
 object ob,king;
 ob=this_object();
 king=present( "king",environment(ob) );
 if(str=="askgod king" || str=="askgod fire king"){
 write(HIY"����ħ����Ц�����ڱ�ħ����ǰ�����ʲ�!?�������һ���ࡣ��ȥ����!!\n"NOR);
 command("perform fireforce.gold-fire");
 king->kill_ob(who);
 return 1;                                                 
                  }
 if(str=="bak king"){
 write(HIY"����ħ����Ц���밵ɱ��ħ��!!!Ҳ������˭�ǰ�ɱ֮��ѽ!!!ȥ����!!\n"NOR);
 command("perform fireforce.gold-fire");
 king->kill_ob(who);
 return 1;
                  }
}


void greeting(object me)
{
 write(HIY"����ħ����������������������������˭!?��
������������治�򵥣�����֮�ϵ��������һ�ţ���
�������������ұȻ����㻹���̫Զ��
"NOR); 
}
int accept_fight(object who)
{
 write(HIY"����ħ�������˵����Ҫ���Ļ��Ϳ��߰ɣ���\n"NOR);
 return 0;
}
int do_exert(string str){
 mixed all;
 int i=0;
 object king,room,me,obj;
 me=this_player();
 room = environment(me);
 all = all_inventory(room);
 king=present( "king",environment(me) );
 if(str=="roar"){
 say(HIC"$N�����������һ����ͼ���������˷���ħ����\n",me);
 say(HIC"����ħ����Ц˵������Ҳ�к�?�����Ǽ�ʶһ��������"HIR"��ħ���"HIC"��!!\n");
 say(HIR"\n����ħ�����һ����ɲ�Ǽ��쾪��ҡ��ħ����˶���!!���������ɲ�Ǽ��������\n");
 for( i = 0 ; i < sizeof(all) ; i++){
 obj = all[i];
  if( obj->is_character() && !obj->is_corpse() && living(obj)
 && obj->query("id")!="fire king"){
 message_vision(HIR"���$N���������ޱȵ���ħŭ�����ˣ���һ���³�һ�����Ѫ!!\n"NOR);
 obj->add("kee",-6000);
 king->kill_ob(obj); }
                                    }
 return 1;
                  }
}
int accept_kill(object who)
{
 who = this_player();
 write(HIY"����ħ���ӱ����ϻ�Ȼվ��\n"NOR);
 command("say �����񣡇����Ҽ��𹦵������ɣ�");
 command("perform fireforce.gold-fire");
 kill_ob(who);
 return 1;
}

void heart_beat()
{

 mixed all;
 object me,room,obj;
 int maxkee,kee,i,count,maxforce;
 count = random(100);
 me = this_object();
 room = environment(me);
 all = all_inventory(room);
 maxforce=me->query("force");
 if(count < 50 && me->is_fighting())
 {
object who;
who=this_player();
if(maxforce < 1000000)
{
 message_vision(HIW"\n                        ���á�Ӱ���ġ�����

����ħ������ͻ��������ϵͳӰ�죬��������Ϊԭ���������������ʱ����ʧɫ��һ˲�䣬
$N�ܵ�����ħ��������Ӱ�죬�������á�\n\n",who);
who->start_busy(3);
me->add("force",200000);
}
}
 if(count < 9 && me->is_fighting())
 {
  message_vision(HIR"\n����ħ�����һ����ɲ�Ǽ��쾪��ҡ��ħ����˶���!!���������ɲ�Ǽ��������!!\n"NOR,me);
  for( i = 0 ; i < sizeof(all) ; i++)
   {
    obj = all[i];
    if( obj->is_character() && !obj->is_corpse() && living(obj)
    && obj->query("id")!="fire king")
     {
      message_vision(HIR"��������˱��������ޱȵ���ħŭ�����ˣ���һ���³�һ�����Ѫ!!\n"NOR,obj);
      obj->add("kee",-4000);
      obj->start_busy(2);
      COMBAT_D->report_status(obj, 1);
     }
   }
 }
 if(count < 2 && me->is_fighting())
 {
  message_vision(HIR"
       ����ħ����ȫ��ҵ�������ϣ�����ҵ���̲�����������
       գ�ۼ䣬����ħ��߳�Ȼص�"HIR"��ħ���ֻ� ҵ����С�"HIW"
       ҵ�𲻶���������������\n"NOR,me);
  for( i = 0 ; i < sizeof(all) ; i++)
   {
    obj = all[i];
    if( obj->is_character() && !obj->is_corpse() && living(obj)
    && obj->query("id")!="fire king")
     {
      message_vision(HIR"���������4/5����ȫ��ҵ��������й������!!\n"NOR,obj);
      obj->add("force",-((obj->query("force")/5))*4);
      COMBAT_D->report_status(obj, 1);
     }
   }
 }
 if(count <13 && me->is_fighting())
  {
  message_vision(HIW"
       ����ħ����������ҵ��������һ˲���ɷ���Ѫ��ħ�磬�����䴵��
       ֮�ﾡ�ӳ��������˿ڱ�������Ϣ
       գ�ۼ䣬����ħ��߳�Ȼص�"HIR"����������  ħ�����졯"HIW"������ħ��Ю��ʴ��
       ����֮�������Ϯ��һ��\n"NOR,me);
  for( i = 0 ; i < sizeof(all) ; i++)
   {
    obj = all[i];
    if( obj->is_character() && !obj->is_corpse() && living(obj)
         && obj->query("id")!="fire king")
     {
      message_vision(HIR"���$N�����ڼ���������������л�������ֱð������������ζ!\n"NOR,obj);
      obj->receive_wound("kee",5000);
      COMBAT_D->report_status(obj, 1);
     }
   }
  }


 if( random(10) < 2 )
 {
  if( is_fighting() )
  {
   if( query("kee") < query("eff_kee") )
    message_vision(HIG"\n����ħ����ð�����ܻ��棬�˿ڽ�����������\n"NOR,me);
    me->receive_heal("kee",8000);
    me->receive_heal("gin",5000);
    me->receive_heal("sen",5000);
    me->delete_busy();
    me->clear_condition();
  }
  else
  {
   if( query("eff_kee") < query("max_kee") )
    command("exert heal");
    me->add("force",100000);
  }
 }
::heart_beat();
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
if(me->query("quest/start_game")< 50)
       {
        tell_object(users(),HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"����ʮ�Ų���������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"����ʮ����������"HIG"��"HIW"��
	"NOR);
	me->set("quest/start_game",50);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}