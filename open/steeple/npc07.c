#include <ansi.h>
inherit NPC;
void do_special1();
void do_special2();
void create()
{
        object ob,who;
        who=this_player();
        set_name("������˾", ({"npc07","okita souji","okita","souji"}));
        set("title", ""HIW"����׫��һ���鳤��"NOR"");
        set("long", "��ѡ�鸱�����ڡ���ѡ��һ���鳤����ѡ�����ʦ���������ݽ�ͷ.\n");
        set("age", 20);
        set("str", 50);
        set("cor", 50);
        set("int", 50);
        set("spi", 50);
        set("cps", 50);
        set("kar", 50);
        set("force", 120000);
        set("max_force", 6000);
        set("force_factor", 60);
        set("combat_exp", 9000000);
        set("max_kee",20000);
        set("kee",20000);
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
        set_skill("blade", 120);
        set_skill("dagger", 60);
        set_skill("dragon-blade",120);
        set_skill("shadow-kill", 30);
        set_skill("shade-steps", 120);
        set_skill("throwing", 120);
        set_skill("rain-throwing", 120);
        map_skill("throwing","rain-throwing");
        map_skill("blade","dragon-blade");
        map_skill("dagger", "shadow-kill");
        map_skill("dodge", "nine-steps");
        map_skill("parry","wind-rain");
        map_skill("force","fireforce");
        set_temp("apply/damage", 90);
        set_temp("apply/armor", 90);
        set("functions/gold-fire/level",100);
        set("functions/manakee/level",200);
        set("quest/gold-fire",1);
        set("chat_chance_combat", 35);
        set("chat_msg_combat", ({
        (: do_special1 :),
        (: do_special2 :),
        }));
        setup();
        carry_object("/u/u/unfinished/sb");
        ob=carry_object("/u/u/unfinished/bomb.c");
        ob->set_amount(1000);
        ob->wield();
        carry_object("/open/killer/weapon/k_cloth3.c")->wear();
        carry_object("/open/killer/weapon/k_arm3.c")->wear();
        carry_object("/open/killer/weapon/k_head3.c")->wear();
        add_money("gold",25);
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
	if(me->query("quest/start_game")< 8)
        {
        tell_object(users(),HIY"
	��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"��������������"HIG"��"HIY"ͨ������

	"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"���߲���������"HIG"��"HIW"��
	"NOR);
	me->set("quest/start_game",8);
        destruct (this_object ());
	return ;
        }
	{
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
        :: die();
	}
}

int accept_kill(object who)
{
who=this_player();
command("say ��!!����!!\n");
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
write(HIY"������˾͵Ц˵���������������ʲ�����Ц�����ˡ���!!\n"
NOR);
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
        "������˾ͻȻ����ɱ��, ȫ��ɢ�������˵�ɱ��, �㵱������ɱ��������ס!!\n"NOR,target);
        message_vision(
        "������˾������ȵ�:\n
        "+HIC"                   ��  Ȼ  ��  ��  ��\n
        "+HIR"                ***"+HIR"**"+HIG"��"+HIR"**"+HIG"��"+HIR"**"+HIG"��"+HIR"**"+HIG"��"+HIR"**"+HIR"***"NOR+"\n\n",target);
        message_vision(HIC
        "������˾�γ�"HIY"��һ��������"HIC"��ʱ��������, ȫ�����������֣�����\n"NOR,target);
        message_vision(HBGRN"\n������˾�Ծ��˵��ٶ���$N������һ����, $N����Ѫ���������\n"NOR,target);
        target->receive_wound("kee",400+random(200));
        COMBAT_D->report_status(target);
        COMBAT_D->report_status(target);
        message_vision(HBGRN"������˾�Ծ��˵��ٶ���$N������һ����, $N����Ѫ���������\n"NOR,target);
        target->receive_wound("kee",200+random(100));
        COMBAT_D->report_status(target);
        COMBAT_D->report_status(target);
        message_vision(HBGRN"������˾�Ծ��˵��ٶ���$N������һ����, $N����Ѫ���������\n"NOR,target);
        target->receive_wound("kee",200+random(100));
        COMBAT_D->report_status(target);
        COMBAT_D->report_status(target);
  }

void do_special2()
  {
    object *enemy,target;
    int i;

        enemy=this_object()->query_enemy();
        i=sizeof(enemy);
        target=enemy[random(i)];
        message_vision( HIG
        "������˾ͻȻ����ɱ��, ȫ��ɢ�������˵�ɱ��, �㵱������ɱ��������ס!!\n"NOR,target);
        message_vision(
        "������˾������ȵ�:\n
        "+HIC"                   ��  Ȼ  ��  ��  ��\n
        "+HIR"                ***"+HIR"**"+HIG"һ"+HIR"**"+HIG"��"+HIR"**"+HIG"��"+HIR"**"+HIG"ն"+HIR"**"+HIR"***"NOR+"\n\n",target);
        message_vision(HIC
        "������˾�γ�"HIY"��һ��������"HIC"��ʱ��������, $Nȫ�����������֣�����\n"NOR,target);
        message_vision(HIW"\n��һ�������ڷ������ɱ��ӵ�ǿ���ȥ$N���Ӿ�, $N��ʱʧȥ�ж�������\n"NOR,target);
        COMBAT_D->report_status(target);
        COMBAT_D->report_status(target);
        target->start_busy(1);
  }
void heart_beat()
{
 object env,mob,*enemy,target,obj;
 int i,j;
 mob = this_object();
 env = environment(mob);
 if( query("kee") < 0)
 mob->die();
 if( random(100) < 30)
 {
    enemy=mob->query_enemy();
    i=sizeof(enemy);
    target=enemy[random(i)];
    if( env == environment(target) )
    {
        message_vision( HIG
        "������˾ͻȻ����ɱ��, ȫ��ɢ�������˵�ɱ��, �㵱������ɱ��������ס!!\n"NOR,target);
        message_vision(
        "������˾������ȵ�:\n
        "+HIW"                   ��  ��  ��  ��  ��\n
        "+HIY"                ***"+HIY"**"+HIY""NOR+HIB"��"+HIY"****"NOR+HIB"ƽ"+HIY"****"NOR+HIB"��"+HIY""NOR+HIY"**"+HIY"***"NOR+"\n\n",target);
        message_vision(HIG
        "������˾������ȫ����, �Խ����ס$N���۾��������³�������΢�㣡����\n"NOR,target);
        message_vision(HIC"��������˾�ĵ�����$N�Ӵ�ʱ��������˾�ĵ��Ե���ʯ����ٶȻ���$N��һ��ն��$N��\n"NOR,target);
        target->receive_wound("kee",500+random(400));
        COMBAT_D->report_status(target);
        message_vision(HIC"һ������, ������˾���̻���, ʹ�����ֵ�ͻ�̳��ž��ס��$N�ؿڴ�ȥ��\n"NOR,target);
        target->receive_wound("kee",300+random(100));
        COMBAT_D->report_status(target);  
        COMBAT_D->report_status(target);
        target->start_busy(1);  
 }
 }
 
 if((mob->query("kee")<mob->query("max_kee")*0.5) && (random(100) < 20) )
 {
    tell_room(environment(), HIY+name()+"������Ȼ�������Ʒ�,Ϊ�Լ�"
               +"����.\n"+NOR);
    mob->receive_curing("kee",2000);
    mob->receive_heal("kee",1000);
 }

   
   set_heart_beat(1);
   ::heart_beat();
   
}
