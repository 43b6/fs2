// ��������ָ�� by Chan 11/29/98
// ֻ���ɰ���������
#include <ansi.h>
inherit F_CLEAN_UP;
int help( object me );
int main( object me,string str )
{
  int cgold;
  object ob,killer;
  if( !sizeof(str) )
    return notify_fail( "�����ʽ����!!���help cforgive\n" );
  if(me->query("clan/rank") > 2)
    return notify_fail("��Ľ׼�����,����ʹ��׷ɱ��!!!\n");
  ob=find_player(str);
  if(!ob) ob=find_living(str);
  if(!ob) ob=LOGIN_D->find_body(str);
  if(!ob)
     return notify_fail("����������˲�������Ŷ???\n");
 if(wizardp(ob)) // ����by avgirl..����˽��cgy..ֻ���Լ���pig..av���Ĵ���..����ppl��ֻ���Ҷ���
     return notify_fail("����������˲�������Ŷ???\n");
  if(!userp(ob))
     return notify_fail("��ֻ�������������Ŷ!!!!\n");
  if(ob==me)
      return notify_fail("���������Լ�ѽ!!!��û�и��ѽ???\n");
  if(!ob->query("ckill"))
      return notify_fail("����û�б�׷��!!��ô����ѽ!!!\n");
  if(ob->query("ckill_id") != me->query("clan/name"))
      return notify_fail("�㲻��׷�����İ��������޷�����!!!\n");
    message_vision("$N��������������,ȡ����$n���е�׷����׷ɱ!!\n",me,ob);
    CHANNEL_D->do_channel(me, "shout", "��"+me->query("clan/name")+"��"+me->query("clan/title")+"����������,ԭ��"+ob->query("name") +"��ȡ��׷ɱ��!!" );
    ob->delete("ckill_id");
    ob->delete("ckill");
  return 1;
}

int help( object me )

{
    write(@HELP

��ʽ˵��:cforgive <ID> ���ⱻ����׷������ (�ް������׼�������ʹ��)
ָ��˵��:
���Ƿ������ɵ�������ȡ��������������׷ɱ����˵�׷���
���ָ��:help ckill
HELP
    );
 return 1;
}

