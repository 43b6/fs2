#include <ansi.h>
inherit NPC;
void do_special1();
void create()
{
        object ob,who;
        who=this_player();
        set_name("��������", ({"npc08","hijikata doshizou","hijikata","doshizou"}));
        set("title", ""HIW"����׫�鸱�ֳ���"NOR"");
        set("long", "
��������������������Ȼ������������ʱ��ĸ˫��������ɩ��ס����������¼�����ѡ�飬
����������ȡ�þֳ�֮λ���Լ���λ�Ӹ��鳤\n");
        set("age", 28);
        set("str", 50);
        set("cor", 50);
        set("int", 50);
        set("spi", 50);
        set("cps", 50);
        set("kar", 50);
        set("force", 100000);
        set("max_force", 5000);
        set("force_factor", 60);
        set("combat_exp", 10000000);
        set("max_kee",30000);
        set("kee",30000);
        set("max_gin",30000);
        set("gin",30000);
        set("max_sen",30000);
        set("sen",30000);
        set("race", "����");
        set("gender", "����");
        set_skill("dodge", 120);
        set_skill("move", 100);
        set_skill("parry", 100);
        set("bellicosity",10000);
        set("s_kee",400);
        set("quest/rain",1);
        set("quests/get_tiger",1);
        set("quest/memory",1);
        set("quest/head-kill",1);
        set("class","killer");
        set("max_s_kee",400);
        set("family/family_name","������");
        set("sec_kee","tiger");
        set_skill("force", 300);
        set_skill("fireforce",300);
        set_skill("dagger", 60);
        set_skill("shadow-kill", 30);
        set_skill("shade-steps", 120);
        set_skill("throwing", 120);
        set_skill("rain-throwing", 120);
        map_skill("throwing","rain-throwing");
        map_skill("dagger", "shadow-kill");
        map_skill("dodge", "nine-steps");
        map_skill("parry","wind-rain");
        map_skill("force","fireforce");
        set_temp("apply/damage", 300);
        set_temp("apply/armor", 300);
        set("functions/gold-fire/level",100);
        set("functions/manakee/level",200);
        set("quest/gold-fire",1);
        set("chat_chance_combat", 25);
        set("chat_msg_combat", ({
        (: do_special1 :),
        }));
        setup();
        carry_object("/u/u/unfinished/db");
        ob=carry_object("/u/u/unfinished/bomb.c");
        ob->set_amount(1000);
        ob->wield();
        carry_object("/open/killer/weapon/k_cloth3.c")->wear();
        carry_object("/open/killer/weapon/k_arm3.c")->wear();
        carry_object("/open/killer/weapon/k_head3.c")->wear();
        add_money("gold",25);
}

int accept_kill(object who)
{
who=this_player();
command("say ��!!����!!\n");
command("wield dart");
command("cmd bellup");
command("perform fireforce.gold-fire");
command("charge "+who->query("id"));
command("split "+who->query("id"));
kill_ob(who);
    return 1;
}
int accept_fight(object who)
{
who=this_player();
command("say ��׫���Աս���ǲ������������!!\n");
command("wield dart");
command("cmd bellup");
command("perform fireforce.gold-fire");
command("charge "+who->query("id"));
command("split "+who->query("id"));
kill_ob(who);
    return 1;
}

int do_cmd(string str)
{
 object who=this_player();
 object ob,anmy;
 ob=this_object();
 anmy=present( "anmy",environment(ob) );
 if(str=="askgod souji" || str=="askgod souji"){
write(HIY"��������͵Ц˵���������������ʲ�����Ц�����ˡ���!!\n"
NOR);
command("wield dart");
command("cmd bellup");
command("perform fireforce.gold-fire");
command("charge "+who->query("id"));
command("split "+who->query("id"));
kill_ob(who);
 return 1;
                  }
}
void do_special1()
  {
    object *enemy,target;
    int i;

        enemy=this_object()->query_enemy();
        i=sizeof(enemy);
        target=enemy[random(i)];
        message_vision( HIG
        "��������ͻȻ����ɱ��, ȫ��ɢ�������˵�ɱ��, �㵱������ɱ��������ס!!\n"NOR,target);
        message_vision(
        "��������������ȵ�:\n
        "+HIC"                   ��  Ȼ  ��  ��  ��\n
        "+HIR"                ***"+HIR"**"+HBCYN"ˮ"NOR+HIR"**"+HBCYN"ƽ"NOR+HIR"**"+HBCYN"��"NOR+HIR"**"+HBCYN"��"NOR+HIR"**"+HIR"***"NOR+"\n\n",target);
        message_vision(HIC
        "���������γ�"HIY"��Ȫ�ؼ涨"HIC"��ʱ��������, ȫ�����������֣�����\n"NOR,target);
        message_vision(HIW"\n����������"HIY"��Ȫ�ؼ涨"HIW"��$N�ؿڶԴ�����, ��$N������һ����\n"NOR,target);
        target->receive_wound("kee",1000+random(500));
        COMBAT_D->report_status(target);
        COMBAT_D->report_status(target);
        target->start_busy(1);
  }
void heart_beat()
{
 object env,mob,*enemy,target;
 int i,j;
 mob = this_object();
 env = environment(mob);
if( query("kee") < 0)
mob->die();
 if( random(100) < 20)
 {
    enemy=mob->query_enemy();
    i=sizeof(enemy);
    target=enemy[random(i)];
    if( env == environment(target) )
    {
        message_vision( HIG
        "��������ͻȻ����ɱ��, ȫ��ɢ�������˵�ɱ��, �㵱������ɱ��������ס!!\n"NOR,target);
        message_vision(
        "��������������ȵ�:\n
        "+HIW"                   ��  ��  ��  ��  ��\n
        "+HIB"                ***"+HIB"**"+HBCYN"��"NOR+HIB"**"+HBCYN"��"NOR+HIB"**"+HBCYN"��"NOR+HIB"**"+HBCYN"ն"NOR+HIB"**"+HIB"***"NOR+"\n\n",target);
        message_vision(HIC
        "���������γ�"HIY"��Ȫ�ؼ涨"HIC"��ʱ��������, ȫ�����������֣�����\n"NOR,target);
        for(j=1;j<=10;j++)
        {
        message_vision(HIC"�����������ٻ�ն"HIG"��Ȫ�ؼ涨"HIC", ����ǰ㳯��$N����������\n"NOR,target);
        target->receive_wound("kee",100+random(50));
        COMBAT_D->report_status(target);
        }
    }
 }
 
 if((mob->query("kee")<mob->query("max_kee")*0.5) && (random(100) < 20) )
 {
    tell_room(environment(), HIY+name()+"������Ȼ�������Ʒ�,Ϊ�Լ�"
               +"����.\n"+NOR);
    mob->receive_curing("kee",3000);
    mob->receive_heal("kee",1000);
 }

   
   set_heart_beat(1);
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
void die ()
{
	object me=query_temp("last_damage_from");
	if(!present("fight_card",me))
	{
	tell_object(me,"\n\nϵͳ��������ûЯ����Ƭ�������޷���¼ս����\n");
	destruct (this_object ());
	return ;
	}
	if(!me->query("quest/start_game"))
	{
	tell_object(me,"\n\nϵͳ��������û����ʽ�Ǽǣ������޷����䡣\n");
	destruct (this_object ());
	return ;
	}
	if(me->query("quest/start_game")< 9)
        {
        tell_object(users(),HIY"
	��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"�ڰ˲���������"HIG"��"HIY"ͨ������
	
	"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"�ھŲ���������"HIG"��"HIW"��
	"NOR);
	me->set("quest/start_game",9);
        destruct (this_object ());
	return ;
        }
	{
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
        :: die();
	}
}