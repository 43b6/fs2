#include <ansi.h>
inherit F_SPELL;
inherit SSERVER;
int fun;
int skl;
int fk;
string msg;
object victim,*enemy;
object me;
int i;
int conjure(object me, object target)
{       
        me=this_player();  
        enemy = me->query_enemy();
        i=sizeof(enemy);
        victim = offensive_target(me);
        if(!victim) return notify_fail("���Ҳ�������!!\n");
        fun=me->query("spells/fdragon/level");
        skl = (int)(me->query_skill("dremagic", 1));
        fk=(fun+skl);

        if (!me->query("spells/fdragon/level"))
        return 0;

        if( !target ) target = offensive_target(me);
        if(!me->is_fighting(target) )
        return notify_fail("�ⷨ��ֻ�ܶ�ս���еĶ���ʹ�á�\n");

        if(me->query("family/family_name")!="ҹ��С��")
        return notify_fail("ֻ�����߲���ʹ�á�\n");

        if(me->query("combat_exp") < 1500000)
        return notify_fail("ʵս���鲻����ʩչ��������!!\n");

        if(me->query("allow_fdragon")!=1)
        return notify_fail("͵ѧ�Ĳ���ʹ���\n");
        
        if((int)me->query("atman") < 500)
        return notify_fail("��ķ���������\n");

        if(me->query_temp("fdragon")==1)
        return notify_fail("������ʩ����\n");

        if((int)me->query("gin") < 20 )
        return notify_fail("��ľ���û�а취��Ч���У�\n");

        me->add("atman", -(250+fk*3));
        me->receive_damage("gin", 10);

message_vision(HIC"$N˫�ָ߾ٴ󺰲����ںڰ���ص�����,�����ҵĺ���\n"NOR,me,victim);
message_vision(HIC"�����������Ұ�......"HIR" �� "HIW" ֮ "HIG" �� \n"NOR,me,victim);

message_vision(HIW"ֻ��ңԶ�ĵ�ƽ�߱˶�...һ��ȫ����ķ���Ѹ�ٵ�������ӽ�\n"NOR,me,victim);

message_vision(HIR"                                        &.  &.     .\n"NOR,me,victim);
message_vision(HIR"                                        ~ss.&ss. .s'\n"NOR,me,victim);
message_vision(HIR"                                .     .ss&&&&&&&&&&s.\n"NOR,me,victim);
message_vision(HIR"                                &. s&&&&&&&&&&&&&&`&&Ss\n"NOR,me,victim);
message_vision(HIR"                                ~&&&&&&&&&&&&&&&&&&o&&&       .\n"NOR,me,victim);
message_vision(HIR"                               s&&&&&&&&&&&&&&&&&&&&&&&&s.  .s\n"NOR,me,victim);
message_vision(HIR"                              s&&&&&&&&&~&&&&&&~~~~&&&&&&~&&&&&.\n"NOR,me,victim);
message_vision(HIR"                              s&&&&&&&&&&s~~&&&&ssssss~&&&&&&&&~\n"NOR,me,victim);
message_vision(HIR"                             s&&&&&&&&&&'         `~~~ss~&~&s~~\n"NOR,me,victim);
message_vision(HIR"                             s&&&&&&&&&&.              `~~~~~&  .s&&s\n"NOR,me,victim);
message_vision(HIR"                             s&&&&&&&&&&&&s....               `s&&'  `\n"NOR,me,victim);
message_vision(HIR"                         `ssss&&&&&&&&&&&&&&&&&&&&####s.     .&&~&.   . s-\n"NOR,me,victim);
message_vision(HIR"                           `~~~~&&&&&&&&&&&&&&&&&&&&#####&&&&&&~     &.&'\n"NOR,me,victim);
message_vision(HIR"                                 ~&&&&&&&&&&&&&&&&&&&&&####s~~     .&&&|\n"NOR,me,victim);
message_vision(HIR"                                  ~&&&&&&&&&&&&&&&&&&&&&&&&##s    .&&~ &\n"NOR,me,victim);
message_vision(HIR"                                   &&~~&&&&&&&&&&&&&&&&&&&&&&&&&&&&&~   `\n"NOR,me,victim);
message_vision(HIR"                                  &&~  ~&~&&&&&&&&&&&&&&&&&&&&S~~~~'\n"NOR,me,victim);
message_vision(HIR"                             .   .~     '  &&&&&&&&&&&&&&&&####s\n"NOR,me,victim);
message_vision(HIR"                             &.          .s&&&&&&&&&&&&&&&&&####~\n"NOR,me,victim);
message_vision(HIR"                 .           ~&s.   ..ssS&&&&&&&&&&&&&&&&&&&####~\n"NOR,me,victim);
message_vision(HIR"                 &           .&&&S&&&&&&&&&&&&&&&&&&&&&&&&#####~\n"NOR,me,victim);
message_vision(HIR"                 Ss     ..sS&&&&&&&&&&&&&&&&&&&&&&&&&&&######~~\n"NOR,me,victim);
message_vision(HIR"                  ~&&sS&&&&&&&&&&&&&&&&&&&&&&&&&&&########~\n"NOR,me,victim);
message_vision(HIR"           .      s&&&&&&&&&&&&&&&&&&&&&&&&#########~~'\n"NOR,me,victim);
message_vision(HIR"           &    s&&&&&&&&&&&&&&&&&&&&&#######~~'      s'         .\n"NOR,me,victim);
message_vision(HIR"           &&..&&&&&&&&&&&&&&&&&&######~'       .....&&....    .&\n"NOR,me,victim);
message_vision(HIR"            ~&&&&&&&&&&&&&&&######~' .     .sS&&&&&&&&&&&&&&&&s&&\n"NOR,me,victim);
message_vision(HIR"              &&&&&&&&&&&&#####~     &. .s&&&&&&&&&&&&&&&&&&&&&&&&s.\n"NOR,me,victim);
message_vision(HIR"   )          &&&&&&&&&&&#####'      `&&&&&&&&&###########&&&&&&&&&&&.\n"NOR,me,victim);
message_vision(HIR"  ((          &&&&&&&&&&&#####       &&&&&&&&###~       ~####&&&&&&&&&&\n"NOR,me,victim);
message_vision(HIR"  ) \\         &&&&&&&&&&&&####.     &&&&&&###~             ~###&&&&&&&&&   s'\n"NOR,me,victim);
message_vision(HIR" (   )        &&&&&&&&&&&&&####.   &&&&&###~                ####&&&&&&&&s&&'\n"NOR,me,victim);
message_vision(HIR" )  ( (       &&~&&&&&&&&&&&#####.&&&&&###'                .###&&&&&&&&&&~\n"NOR,me,victim);
message_vision(HIR" (  )  )   _.&~   &&&&&&&&&&&&######.&&##'                .###&&&&&&&&&&\n"NOR,me,victim);
message_vision(HIR" ) (  ( \\.         ~&&&&&&&&&&&&&#######....          ..####&&&&&&&&&&&~\n"NOR,me,victim);
message_vision(HIR"(   )& )  )        .&&&&&&&&&&&&&&&&&&####################&&&&&&&&&&&~\n"NOR,me,victim);
message_vision(HIR"(   (&&  ( \\     _sS~  `~&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&S&&.\n"NOR,me,victim);
message_vision(HIR" )  )&&&s ) )  .      .   `&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&~'  `&&\n"NOR,me,victim);
message_vision(HIR"  (   &&&Ss/  .&.    .&..s&&&&&&##S&&&&&&&&&&&&&&&&&&&&&&&&S~~        '\n"NOR,me,victim);
message_vision(HIR"    \\)_&&&&&&&&&&&&&&&&&&&&&&&##~  &&        `&&.        `&&.\n"NOR,me,victim);
message_vision(HIR"        `~S&&&&&&&&&&&&&&&&&#~      &          `&          `&\n"NOR,me,victim);
message_vision(HIR"            `~~~~~~~~~~~~~'         '           '           '\n\n\n"NOR,me,victim);

        
                me->set_temp("fdragon",1);
                enemy = all_inventory( environment(me) );
   for( i=0; i<sizeof(enemy); i++ )
   {
        if( enemy[i]->is_character() && !enemy[i]->is_corpse() && living(enemy[i]) &&
            !enemy[i]->query("no_kill") && enemy[i]!=me &&
            !in_edit(enemy[i]) && !in_input(enemy[i]) && !enemy[i]->query_temp("netdead") &&
            !wizardp(enemy[i]))
        {     
           if(random(100)>20)
        {
            msg = HIR "����Ѹ�ٵĽ�"+enemy[i]->query("name")+"������,��"+enemy[i]->query("name")+"�γ�Ī����˺���\n" NOR;
            enemy[i]->receive_damage("kee", fk*5+random(500),me);
                        COMBAT_D->report_status(enemy[i]);
        } else {
                msg = HIW ""+enemy[i]->query("name")+"�Լ�����ٶȱܿ��˻����Ĺ�����\n" NOR;
        }
                
        message_vision(msg, me, target);
        
                }

        
                }
                if(fun<100) spell_improved("fdragon",random(500));
               call_out("can_use",3,me);
       return 1;
}               
                
int can_use(object me)
{
me=this_player();
if(me)
me->delete_temp("fdragon");
message_vision(HIR"�����ƺ��ܵ�$N�ĸ��У��ٶȸ�������ʣ��Ⱥ�$N�Ĳ�ǲ!!\n"NOR,me);
return 1;
}

