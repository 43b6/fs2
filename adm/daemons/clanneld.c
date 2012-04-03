// channeld.c
// ���Ӹ���Ƶ��, ������ gage ����
// wade (6/6/1996)
// ���ڰ� chat* ��������
// ���� music Ƶ��, ����� /cmds/std/song.c �� /obj/example/song.c
// wade (7/7/1996)
// ���Ӱ���Ƶ�� By Swy

// airke���°�    �ɰ屾��channeld.air
// 1998/9/3
// Chan���������� ht cb �� exp5000���²����ø���Ƶ��

#include <ansi.h>
#include <net/dns.h>

inherit F_DBASE;

void create()
{
        seteuid(getuid());  // This is required to pass intermud access check.
        set_temp("channel_id", "Ƶ������");
}


string myclass,myclan;
string record;

mapping channels = ([
        "sys":  (["msg_speak": "��ϵͳ��%s: %s\n",
                  "wiz_only": 1 ]),

        "wiz":  (["msg_speak": "��"HIY"�������"NOR"��"HIY"%s: %s\n"NOR,
                  "wiz_only": 1 ]),

        "gwiz": (["msg_speak": "��"HIG"������ʦ"NOR"��"HIG"%s��%s\n"NOR,
                  "wiz_only": 1,
                  "intermud": GWIZ,
                  "channel": "CREATOR",
                  "filter": 1 ]),

        "es":   (["msg_speak":  "��"HIR"����ռ�"NOR"��"HIR"%s��%s\n"NOR,
                  "intermud": GCHANNEL,
                  "channel": "es",
                  "filter": (: $1["MUDLIB"]=="Eastern Stories" :) ]),

        "twiz": (["msg_speak":  "��"HIW"̨����ʦ"NOR"��"HIW"%s��%s\n"NOR,
                  "wiz_only":1,
                  "intermud": GCHANNEL,
                  "channel": "twiz",
                  "filter": (: $1["HOSTADDRESS"][0..2]=="140" :) ]),

        "chat":  (["msg_speak": "��"HIC"����"NOR"��"HIC"%s˵��: %s\n"NOR]),


        "music":  (["msg_speak": "��"HIG"����"NOR"��"HIG"%s ����: %s\n"NOR]),

        "cb":  (["msg_speak": HIC"��"HIW"����Э��"HIW"��"HIC"%s ̸��: %s\n"NOR]),

        "dead":  (["msg_speak": "��"HIR"�����챨"NOR"��"HIR"%s ˬ��ع������� �� %s\n"NOR]),

        "ht":   (["msg_speak": HIY"��"+HIG+"�����㲥"+HIY"������ %s˵��: %s\n"NOR]),
        
        "shout":(["msg_speak": HIR"%s�������: %s\n"NOR]),

        "gamble":(["msg_speak": "%s\n",
                   "mud_only": 1, ]),

        "mud":  (["msg_speak": HIG"%s\n"NOR,
                  "mud_only": 1, ]),

        "rumor":(["msg_speak": "��"HIM"ҥ��"NOR"��"HIM"%s: %s\n"NOR,
                  "anonymous": "ĳ��", ]),

        "rumor*":(["msg_speak": "��"HIM"ҥ��"NOR"��"HIM""]),

        "ct*":(["msg_speak": "��"HIY"����"NOR"��"HIY""]),

        "wiz*": (["msg_speak": "��"HIY"�������"NOR"��"HIY"",
                  "wiz_only": 1        ]),

        "chat*":  (["msg_speak": "��"HIC"����"NOR"��"HIC""]),

        "gt*":(["msg_speak": "��"HIG"����"NOR"��"HIG""]),

        "gt":(["msg_speak": "��"HIG"����"NOR"��"]),
        
        "ct":(["msg_speak": "��"HIY"����"NOR"��"]),

        "ht*":   (["msg_speak": HIY"��"+HIG+"�����㲥"+HIY"��"]),

        "cb*":  (["msg_speak": HIC"��"HIW"����Э��"HIC"��"]),

]);





varargs int do_channel(object me, string verb, string arg, int emote)
{
  
  string *tuned_ch, who, emote_verb, emote_arg,cls;
  object *usr;
  int exp,clanrank;

  if (wizardp(me) && verb == "record") {
    if (!arg) tell_object (me, "����¼����״�ǣ�"+record+"\n");
    else if (arg == "stop") record = 0;
    else if (arg == "wiz" || arg == "chat") {
      if (write_file ("/log/RECORD/"+arg,
        me->query("id")+" ����¼����"+ctime(time()), 1))
      {
        record = arg;
        tell_object (me, "����¼����ʼ¼ " + arg + " Ƶ����\n");
      }
    }
    return 1;
  }

  if( undefinedp(channels[verb]) && !mapp(channels))
    return notify_fail("���κ�Ƶ�����ڡ�\n");
  if(!channels[verb])
    return 0;


  if( userp(me) ) //���ʹ��Ƶ��������
  {                               

      exp=me->query("combat_exp");
      clanrank=me->query("clan/rank");
      myclass=me->query("class");
      myclan=me->query("clan/name");
      tuned_ch = me->query_temp("channels");

      if( arg==me->query_temp("last_channel_msg") )
         return notify_fail("˵���벻Ҫ�ظ���ͬ��ѶϢ��\n");

      me->set_temp("last_channel_msg", arg);

      // ����ʦ���ܴ���ʦƵ��
      if( channels[verb]["wiz_only"]
       && !wizardp(me) )
        return notify_fail("������ʦר��Ƶ����\n");

      // û���ɲ����� ct By Swy
      if(verb == "ct" && !myclan)
        return notify_fail("����δ�����κΰ��ɡ�\n");
      
      if(verb == "gt" && !myclass)
        return notify_fail("����δ�����κι��ᡣ\n");
      //����Э��Ƶ��
      if(verb == "cb" && (clanrank > 2))
        return notify_fail("����ɲ㼶����!!�޷�ʹ�ô�Ƶ����\n");

      if(verb == "ht" && (exp<3000000))
        return notify_fail("�㾭��ֵδ��������!!�����Ǵ���!!��\n");
      
      // ���δ��15�겻�ܿ�"es"Ƶ��
      if( verb =="es"
       && (int)me->query("age")<15 )
        return notify_fail("Ҫ��15�����ʹ��esƵ����Ȩ����\n");

      //����: shoutup ����ָ��
      if(me->query("shutup"))
          return notify_fail("���Ѿ���ȡ��ʹ�ù���Ƶ����Ȩ����!\n");
      if(exp < 5000)
      //����exp��5000���²������κ�Ƶ��,��ֹ����������!!!!
          return notify_fail("�㾭��ֵδ��5000�޷�ʹ�����е�Ƶ��!!!\n");

      //�趨����
      usr = filter_array(users(), "listen_me", this_object(), me, verb);
  } else {
      //mobʹ��Ƶ��,����������user
      usr = users();
  }
  
  // ʹ�ú��Զ��򿪸�Ƶ��
  if( pointerp(tuned_ch) )
  {
     if( member_array(verb, tuned_ch)==-1 )
        me->set_temp("channels", tuned_ch + ({ verb }) );
  } 
  else
     me->set_temp("channels", ({ verb }) );

  // ��ҿ��Դ� mud Ƶ������, ���ǲ���ʹ�� mud Ƶ��
  if ( channels[verb]["mud_only"] && !wizardp(me) && userp(me) )
     return 1;
    

  //  ����who ����
  if( channels[verb]["anonymous"] )
    who = channels[verb]["anonymous"];
  else
    if( !(who = me->query_temp("channel_id") ) )
      if( !(who = me->query("channel_id") ) )
        who = me->query("name") + "(" + (me->query("id")) + ")";

  arg = ( stringp(arg) ) ? trans_color(arg) : "...";

 
//�����Ǹ�Ƶ���ͳ�ѶϢ


//emote
  if( verb == "ht*" ||verb == "cb*" ||verb == "chat*" || verb== "wiz*" || verb== "ct*" || verb =="rumor*" || verb == "gt*")
  {
    if (!arg )
      return notify_fail("�÷�: <����> <����> \n");
    if( sscanf (arg, "%s %s", emote_verb, emote_arg) != 2 )
      emote_verb = arg;

    return ( EMOTE_D->do_emote(me,emote_verb,emote_arg,usr,channels[verb]["msg_speak"]) ) ? 1:0;
  }


 
//����Ƶ��
  if( verb == "gt" )
  {
      cls = (me->query("gender") == "Ů��") ? to_chinese("f_"+myclass) :
                                                to_chinese(myclass) ;
      message( "class_channel",
               sprintf(HIG"%s"NOR"%s˵��: %s\n"NOR, cls, who, arg ),
               usr );
      return 1;
  }

//����Ƶ��
  if( verb == "ct" )
  { 
      message( "clan_channel",
               sprintf(HIY"��"HIC"%s"HIY"��%s˵��: %s\n"NOR, myclan, who, arg ),
               usr );
      return 1;
  }  

// mud_only Ƶ��(mud_onlyƵ��û�г�˵����)
  if( channels[verb]["mud_only"] )
  {
      message( "channel:" + verb,
               sprintf( channels[verb]["msg_speak"], arg ),
                usr );
      return 1;
  }


// һ��Ƶ�� 
  message( "channel:" + verb, sprintf( channels[verb]["msg_speak"],
               who, arg ), usr );
  if (verb == record)
    write_file ("/log/RECORD/"+record, sprintf( channels[verb]["msg_speak"],
               who, arg ) );
   
      


  if( (verb == "rumor"|| verb == "rumor*")
       && wiz_level(me) <=1)
  {
        write ("�����㵽��ɢ��ҥ��, �о�ȫ����������.\n");
        me->receive_damage("gin", 10);
        me->receive_damage("kee", 10);
        me->receive_damage("sen", 10);
        do_channel(this_object(), "sys",
        me->name()+"("+me->query("id")+")"+ "ɢ��ҥ�Ե�: "+arg, 0);
  }
    

    if( !undefinedp(channels[verb]["intermud"])
     &&  base_name(me) != channels[verb]["intermud"] )
      channels[verb]["intermud"]->send_msg(channels[verb]["channel"],
            me->query("id"),me->name(1),arg,0,channels[verb]["filter"] );
    return 1;




 return 0;
/*
  if( channels[verb]
   && !undefinedp(channels[verb]["intermud"])
   &&  base_name(me) != channels[verb]["intermud"] )
    channels[verb]["intermud"]->send_msg(channels[verb]["channel"],
           me->query("id"),me->name(1),arg,0,channels[verb]["filter"] );
    return 1; */
}



//��������Ƿ����ѶϢ

int listen_me(object who, object me, string verb)
{
  
  if( !environment(who) )  // �ֱ����������û
      return 0;
  
//����gage����û��....�ȷ���
//  if(who->gage(me))
//      return 0;
 
  //�ֱ��Ƿ�tune on
  if( !who->query_temp("channels")
        || member_array(verb, who->query_temp("channels")) == -1)
      return 0;
  
  if( channels[verb]["wiz_only"] )
      return wizardp(who);  
  

  //����Ƶ��
  if (verb == "gt" || verb == "gt*" )
      return (myclass == who->query("class"))?1:0;   
  //����Ƶ��
  if (verb == "ct" || verb == "ct*") 
      return (myclan == who->query("clan/name"))?1:0; 


  return 1;
}
