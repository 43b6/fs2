//��ȭ by bss
//�ʳ�mobר�ã�������
//����roger && taifar��дsun_fire_sword��������ʽ
#include <ansi.h>
#include <combat.h>
inherit SKILL;
void sp1(object me, object victim, object  weapon, int damage);
void sp2(object me, object victim, object  weapon, int damage);
void sp_attack(object me,object victim,object weapon,int damage);
void sp_attack0(object me, object victim, object  weapon, int damage);
void sp_attack5(object me, object victim, object  weapon, int damage);

string *taiganfist = ({
"$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ���"HIC"��"NOR"�е�����ʽ"HIC"������ӭ�͡�"NOR"������ƽ�ƶ�����һ��������$N�����ĳ������˲������������\n",
"$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ���"HIR"��"NOR"�е�����ʽ"HIR"�����ż�����"NOR"���������϶�������������һ���ȷ�����$N�����ƶ�����ʹ�����ֲ���������ȸС�\n",
"$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ��е�"HIC"��"NOR"��"HIC"��÷ѩ������"NOR"��������ѩ�����ɻ���$n��\n",
"$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ��е�"HIR"��"NOR"��"HIR"��÷ѩ���ġ�"NOR"���������������$n�ĳ���һʮ���ơ�\n",
"$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ��е�"HIC"��"NOR"��"HIC"����֦��б��"NOR"������ƽ�٣���������в��б������������$n��$l��\n",
"$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ��е�"HIR"��"NOR"��"HIR"��������֦��"NOR"�����Ƹ߾٣�Ѹ�ٵ����Ļ���$n��$l��\n",
"$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ��е�"HIC"��"NOR"��"HIC"������������"NOR"�����Ʋ�ָ�ɽ���Ѹ�װ����$n��$l��\n",
"$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ��е�"HIR"��"NOR"��"HIR"��ǧ��ѹ�ա�"NOR"�����ƴ�ָ�ɵ������������$n��$l��\n",
"$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ��е�"HIC"��"NOR"��"HIC"����ɳçç��"NOR"�������������п���ɳ֮��ѹ����$n͸����������\n",
"$Nʹ��"HIC"��"HIR"��"NOR"�Ʒ��е�"HIR"��"NOR"��"HIR"���󺣳�ɳ��"NOR"��������������ŭ������֮��ӿ����$n�ľ�������\n",
});

string *fon_un = ({
HIW"\n���������Ƶ�һʽ"HIB"��������ˮ��"HIW"����ʽ������ˮ�㳯$n��ȥ��ʹ��Ŀ��Ͼ��\n"NOR,
HIW"\n���������Ƶڶ�ʽ"HIB"�����Ǵ��¡�"HIW"��������ָ��Ȼ��$nֱ�̹�ȥ��������$n���ϼ���ҪѨ\n"NOR,
HIW"\n���������Ƶ���ʽ"HIB"�����Ƹ��ꡯ"HIW"��$N˫����糵����$N����ת��������$n����ʽ��������\n\n�����������֣���������\n"NOR,
HIW"\n���������Ƶ���ʽ"HIB"����ɽ������"HIW"��$N��˫�Ʋ������أ������������������ƶ��������ʯ\n\n������$n\n"NOR,
HIW"\n���������Ƶ���ʽ"HIB"������������"HIW"��$N˫��$n���ϻ���ʮ����СԲȦ��$n\n\n��Ȼ����һ�𣬶�������\n\n"NOR,
HIW"\n���������Ƶ���ʽ"HIB"������¥��"HIW"��$N�����������Բת����һ�������㳯$n��ȥ\n"NOR,
HIW"\n���������Ƶ���ʽ"HIB"����籩�ꡯ"HIW"����ʽ���಻���ĳ�$n��ȥ��ʹ$n�����ش�\n"NOR,
HIW"\n���������Ƶڰ�ʽ"HIB"�����ŭ����"HIW"�����ƴ�ָ�ɵ��ڿռ��п��ٵĿ�����ʹ���ܲ����˾޴���ƿ���\n"NOR,
HIW"\n���������Ƶھ�ʽ"HIB"��˺�����ơ�"HIW"��$N˫�ƺϲ������߶ȼ��еľ����������ģ���Ȼ����һ�ƣ�\n\nһ������������$n��ȥ��\n"NOR,
HIW"\n���������Ƶ�ʮʽ"HIB"���ƺ����Ρ�"HIW"����������˿�ӿ������$n�����ܵĻ���Ҳû��\n"NOR,
HIW"\n���������Ƶ�ʮһʽ"HIB"��������筡�"HIW"��$NԾ�����У�˫�Ƴ�$n�������ģ�����������������ռ�\n"NOR,
});


mapping *action = ({
(["action":
HIY"$N"HIY"����������ʹ����ȭ��һʽ"HIC"������֮��"HIY"��$N"HIY"������ϥ��������һֻ���㳯$n��ȥ��
������$n��\��������Ҫ����$N"HIY"������һ��ʱ��$N"HIY"�������ȻΥ�������ͣ�ڰ���У����
ͷ�Ͻ��£�˫������������һ�ţ��ҽ��������ߣ��ۿ���Ҫ����$n���°���"NOR,
        "damage":       300,
        "dodge":        -100,
        "parry":        -100,
        "force":        100,
        "damage_type" : "����",
        "post_action":          (: sp_attack:),
]),
(["action":
HIY"$N"HIY"�����ķ���ʹ����ȭ�ڶ�ʽ"HIC"�����´����"HIY"��˫�ֺ�ʮ�����߶ȼ��еľ�������˫����
�ģ�˫������һ�ƣ�һ����ɽ�����ľ���Ϯ��$n������$n����˫��׼��Ӳ�����Ҫ������
����ʱ��$N"HIY"��Ȼ��$n���ҷ����֣��ҽ���$n��С������"NOR,
        "damage":       300,
        "dodge":        -100,
        "parry":        -100,
        "force":        100,
        "damage_type" : "����",
]),
(["action":
HIY"$N"HIY"����˫ȭ��ʹ����ȭ����ʽ"HIC"���ʶ���ԭ��"HIY"��˫ȭ������������һ����ʹ���治ס����
����$n���㲻�ȣ��������ɵ��洫���ľ������˿��У�$N"HIY"ȫ����һ�ᣬ�����ڵ�һ
��ػ���$n��$n�����ڰ�����޴��������ۿ���Ҫ��������"NOR,
        "damage":       300,
        "dodge":        -100,
        "parry":        -100,
        "force":        100,
        "damage_type" : "����",
        "post_action":          (: sp_attack:),
]),
(["action":
HIY"$N"HIY"��ȭΪ�ƣ�ʹ����ȭ����ʽ"HIC"��ǧ������"HIY"��һ���޴���Ӱ�����\�ص���$nϮȥ��ɲʱ
��$n��һ���������������ڵ�ѣȻ�о���$n�����������ٱ۸񵵣����ھ��ƿ�Ҫ����
$n��ɲ�ǣ�$N"HIY"�ľ���һ�ƣ���ͻȻ��תΪϸ��ë�����ҿ���Ӱ��һʱ$n������˷���
�Ǽ�ӿ��쭵���Ӱ"NOR,
        "damage":       300,
        "dodge":        -100,
        "parry":        -100,
        "force":        100,
        "damage_type" : "����",
        "post_action":                (: sp_attack5 :),
]),
(["action":
HIY"$N"HIY"���о��Ⱪ�ţ�ʹ����ȭ����ʽ"HIC"�����ۼ���"HIY"�����ҵĽ����쳣�ľ�������$nϮȥ��
����������ȭ�ƣ��·�������ʯ��ɽ��ǿ�����������ƺ�Ҫ���˻�����˺���ӿ��$n"NOR,
        "damage":       300,
        "dodge":        -100,
        "parry":        -100,
        "force":        100,
        "damage_type" : "����",
        "post_action":  (:sp1:),
]),
(["action":
HIY"$N"HIY"ʹ����ȭ����ʽ"HIC"���۰����¡�"HIY"��˫ȭ��������������ϵĻ�����է��֮��ȫ���·���
��ÿȭ����$n�붼�벻���õط������������������пյ��뷨��ʹ$n���ֵ����ľ�����
����ɥʧ������"NOR,
        "damage":       300,
        "dodge":        -100,
        "parry":        -100,
        "force":        100,
        "damage_type" : "����",
        "post_action":                (: sp_attack0 :),
]),
(["action":
HIY"$N"HIY"��������˫�ۣ�ɲ�Ǽ���������������ķ���߾��磬ʹ����ȭ����ʽ"HIC"������֮��"HIY"
��$N"HIY"�����֪����$n��ǿ������׼��ʱ����һȭ������$n������Ц���������ȼ�ֹ�ڴ���
�����������з�����û�뵽$N"HIY"ֻ�����У�������ɱ��ȴ��$N"HIY"���ҽţ�$n��ɫ��䣬��Ϊ��
�Ż����ĽǶȼ�ʱ������$n�붼û�뵽��"NOR,
        "damage":       300,
        "dodge":        -100,
        "parry":        -100,
        "force":        100,
        "damage_type" : "����",
]),
(["action":
HIY"$N"HIY"��ǰ���һ����ɱ����$N"HIY"�����ӿ����ʹ���˻�ȭ�ڰ�ʽ"HIC"����ŭ���ա�"HIY"��ֻ��$N"HIY"����
�ұۣ����һ��������ȭ����������ȭ������$n������ȭ����Ϊһֻ����������������
��$n��ȥ�����ܿ����ܵ�ȭ��Ӱ��Ҳ�����˴��СС��ͬ�����磬ʹ��$n���Զ���"NOR,
        "damage":       300,
        "dodge":        -100,
        "parry":        -100,
        "force":        100,
        "damage_type" : "����",
        "post_action":  (:sp2:),
]),
});
int valid_learn(object me)
{
        return 1;
}
int valid_enable(string usage)
{
        return (usage=="unarmed");
}
mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}
void sp1(object me, object victim, object  weapon, int damage)
{
   int skill= me->query_skill("kingfist", 1);
   message_vision("$N����ʽ������������������������в���˺�ѿ���\n",victim);
   victim->receive_damage("kee", (skill* 3));
   victim->apply_condition("hart",random(5)+((int)me->query_skill("kingfist",1)/5));
   COMBAT_D->report_status(victim);
   victim->start_busy(2);
}
void sp2(object me, object victim, object  weapon, int damage)
{
   int skill= me->query_skill("kingfist", 1);
   if(70 > random(100))
   {
   message_vision(HIY"
                  _-~~~~~~-_/|          ._---;/^ ^   `./|
           v     /^^ v  ^^  ~/|         (( );/^     > > `/|
   \\     (:)   /^ ^(:)  ^  >>`/|          ,/ ^^  >    > >`/|
    \\    (::) /   (::) ;> / >>`/|        ,/^^^   ,-.   > >>`/|
     \\   (::),~~~.(::)/`/   >>>`/|      ,/^^   ^;   `.   > >`/|
       \\  <_):::::(_>/ /`._--.  `/|     ;/^  ^  ;-_.  `.. >  >`/|
        \\ \\|:::|:::|/ /   ( ))  >`/|   ,/^ ^   ;( ))     ;  >> `/
         \\  \\_:|:_/  /    `.     >`/| ,/^^   ^ ;          ;>  > /;
          \\ \\@, .@/ /      `.  > > `-- ^  ^   ;           :  > /.'
           \\ \\=:=/ /       _`.    >  > >  >  ;           ,` >  /;
            \\\\=:=//       ((,`.> >    > > _/           ,' > > /'
            < o_o >           ~`-__ > ___-~          _,' > > /;
                                  ~~~     ~~_-~=--~~ >> /_;/
                                          _~   _~--____-~



   �������ɵľ�������Ȼ����ס$N�����壬ʹ$N��ȫ�޷������������׸\n"NOR,victim);
   victim->receive_damage("kee", (skill* 3));
   victim->apply_condition("hart",random(5)+((int)me->query_skill("kingfist",1)/5));
   COMBAT_D->report_status(victim);
   victim->start_busy(5);
   }
   else
   {
   message_vision("$N���������ſ����ܹ�����������һ����\n",victim);
   }
}
void sp_attack0(object me, object victim, object  weapon, int damage)
{
  string do_action;
  string arg;
  mixed all;
  object *enemy,who,room,weaponn,obj;
  string actionn;
  int i,j,force;

  force=me->query("force",1);
  enemy = me->query_enemy();
  i=random(sizeof(enemy));


  if( 21 > random(30) && me->query("force") > 360 && !me->query_temp("con_ti",1)) {

message_vision(HIM"
$N�����������֣�ȫ�������ţ������ڿն��𣬴��һ��:
��"HIB"��"HIR"��"HIG"������!!!��"HIM"���Լ�����ٶ��ĳ�
�����������Ʒ�!!!
\n"NOR,me,victim);

    for(j=0; j < 10; j++) {
       do_action = taiganfist[j];
       actionn = "\n";
       actionn += do_action;

       if( weaponn=me->query_temp("weapon") )
       actionn = replace_string(actionn, "$w", weaponn->name());
       message_vision(actionn, me, enemy[i]);
          if( random(me->query("combat_exp")) >
        random(enemy[i]->query("combat_exp"))/6 ) {
        message_vision(HIR"\n$N���㲻���������صû��С�\n"NOR , enemy[i]);
        enemy[i]->receive_damage("kee",50,me);
        COMBAT_D->report_status(enemy[i]);
                                                  }
   else message_vision("\n$N��չ�����Σ� ���յ���������һ�С�\n" , enemy[i]);
                             }

        me->add("force",-100);
        message_vision("\n$Nʹ�꡸"HIB"��"HIR"��"HIG"������"NOR"!!!�������ڶ������㣬��������һʱ����Ϊ��\n",me);
        me->start_busy(1);
                                                          }

}
void sp_attack5(object me, object victim, object  weapon, int damage)
{
  string do_action;
  string arg;
  mixed all;
  object *enemy,who,room,weaponn,obj;
  string actionn;
  int i,j,force;

  force=me->query("force",1);
  enemy = me->query_enemy();
  i=random(sizeof(enemy));


  if( 21 > random(30) && me->query("force") > 510 && !me->query_temp("con_ti",1)) {
message_vision(BLINK+HIG"
\n$N��Ȼ�۷ž��⣬���һ�������������ơ���ɲ�Ǽ�����ӿ��һ�����ƣ�ʹ$n��ȫʧȥ$N����Ӱ!!\n\n
\n$N�Դ���֮����$n˵��:�����аɡ�����ʽ����㳯$nϮ��!!\n\n
"NOR,me,victim);
    for(j=0; j < 11; j++) {
       do_action = fon_un[j];
       actionn = "\n";
       actionn += do_action;

       if( weaponn=me->query_temp("weapon") )
       actionn = replace_string(actionn, "$w", weaponn->name());
       message_vision(actionn, me, enemy[i]);
          if( random(me->query("combat_exp")) >
        random(enemy[i]->query("combat_exp"))/6 ) {
        message_vision(HIR"\n$N���㲻�����ҽ�һ���������ص��ĵ���\n"NOR , enemy[i]);
        enemy[i]->receive_damage("kee",50,me);
        me->add("force",-30);
        COMBAT_D->report_status(enemy[i]);
                                                  }
   else message_vision("\n$N�˱��п죬���յ���������һ�С�\n" , enemy[i]);
                             }

        me->add("force",-100);
        message_vision("\n$Nʹ�꡸���������ơ������ڶ������㣬��������һʱ����Ϊ��\n",me);
        me->start_busy(1);
                                                  }

}
void sp_attack(object me,object victim, object weapon,int damage)
{
 int i,j;
 if(80 > random(100)&& !me->query_temp("conti")){
message_vision(HIY"\n$Nɱ����������Ѫ��һ�֣�����������ʹ����������\n"NOR,me,weapon);
  me->set_temp("conti",1);
  victim->start_busy(2);
  switch(random(5)){
        case 1:
                j=4;
                break;
        case 2:
                j=5;
                break;
        case 3:
                j=6;
                break;
        case 4:
                j=7;
                break;
        case 5:
                j=8;
                break;
        default:
                j=6;
                break;
     }
   for(i=0;i<j;i++)

    COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);

    me->delete_temp("conti");
                     }
}
