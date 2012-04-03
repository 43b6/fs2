#include <ansi.h>
inherit NPC;
void create()
  {
        set("class", "doctor");
        set_name("����", ({ "master tor", "master", "tor" }) );
        set("title",HIW"����Ӱ��"NOR"�����ŵ�����������");
        set("nickname",HIC "���ֻش�"NOR);
        set("gender", "����");
        set("max_gin",4000);
        set("max_sen",4000);
        set("max_kee",5000);
        set("age", 55);
        set("attitude", "heroism");
        set("long",
"����Ϊһ����ҽ,�ഫ��Ϊ�ع��ι����˹�,�ɼ���ҽ���ĸ���.\n"+
"��Ϊ���������ŵ������Է���ҽ��Ϊ����,���ڻ��߾���ȫ���Ը�..\n");
        set("str",18);
        set("cps",30);
        set("per",10);
        set("int",40);
        set("kar",16);
        set("combat_exp",3000000);
        set("force",8000);
        set("max_force", 8000);
        set("force_factor", 10);
        set("score",200000);
        set("functions/gold-needle/level",100);
        set("functions/break-kee/level",100);
        set_skill("godcure",100);
       set_skill("spells",20);
          set_skill("magic",20);
        set_skill("cure",120);
        set_skill("force",60);
        set_skill("move",60);
        set_skill("stabber",120);
        set_skill("parry", 50);
        set_skill("dodge",70);
        set_skill("poison",70);
        set_skill("literate", 80);
        set_skill("seven-steps",100);
        set_skill("yu-needle",100);
        set_skill("shinnoforce",60);
        map_skill("force", "shinnoforce");
        map_skill("dodge", "yu-steps");
        map_skill("stabber","yu-needle");
        map_skill("cure","godcure");
        map_skill("move","seven-steps");
        map_skill("parry", "yu-needle");
        set("chat_chance_combat",65);
        set("chat_msg_combat",({
        (: perform_action("yu-needle.gold-needle") :),
        (: perform_action("yu-needle.break-kee") :),
        }));

        create_family("������", 3, "������");
        setup();
carry_object("/open/doctor/obj/cloth.c")->wear();
carry_object("/open/doctor/obj/needle9.c")->wield();
        add_money("gold",10);
}

void heart_beat()
{
 object me,boy;
 int value;
 me=this_object();
  if(me->query_condition("lyssa"))
  {
    me->clear_condition("lyssa");
    message_vision(HIY"ֻ��$N˫�ۺ�Ȼտ�Ž��,���һ��,�Ƴ������ϵĿ�Ȯ����!!!\n",me);
  }
 boy=present("medicine boy",me);
 if(boy)
  if(boy->query_condition("lyssa"))
  {
    boy->clear_condition("lyssa");
    message_vision(HIG"ֻ��$Nһ������$n�ı���,$n��ʼ����ð��,��$n���ϵĿ�Ȯ�����ƺ�Ҳ���ź�ˮ��ȥ!!\n",me,boy);
   }
 value=random(10);
 if( is_fighting() )
 if( value < 4){
 if( query("kee") < query("eff_kee") ) {
   message_vision(HIW"\n���Ӽ����Ʋ���,�Ͻ��������鵤,��ɫ��ʱ�ö���\n"NOR,me);
    me->receive_heal("kee",500);
    me->receive_heal("gin",200);
    me->receive_heal("sen",200);
    me->delete_busy();
    me->clear_condition();
  }
 } else if( value > 7)
   command("perform yu-needle.gold-needle");
   else if( value = 6)
   command("perform yu-needle.break-kee");
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
if(me->query("quest/start_game")< 14)
       {
        message_vision(HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"��ʮ������������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"��ʮ�Ĳ���������"HIG"��"HIW"��
	"NOR,me);
	me->set("quest/start_game",14);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}


