// ��������������������Լ��ټ��������
// ���⣬�������Ļ������˵�������Լ���ǰ��ˮ����������,
// ϣ�����ָķ�����ٵ����Ŀ���.
// by wade in 1996 5 31
 
#include <ansi.h>
inherit F_CLEAN_UP;
 
int help ();
 
int main (object me,string arg)
{
  object env,can;
  mapping attr;
 
  seteuid(geteuid(me));
 
  if (!arg) return help();
  if (!objectp(can=present(arg,me))) return help();
 
  if (this_player()->is_busy())
    return notify_fail("����һ��������û����ɡ�\n");
 
  env = environment(me);
  if (!mapp(attr = env->query("��Դ/Һ��")))
    return notify_fail("�Ҳ����κ�Һ�����װ.\n");
 
  if (env->query("have_poison"))
  {
    can->set ("get_poison",  env->query("poison_type"));
    can->set ("poison_power",env->query("poison_power"));
  }
 
  if (can->query("Һ��/ʣ"))
    message_vision("$N��" + can->name() + "��ʣ�µ�" +
                can->query("Һ��/����") + "������\n",me);
 
  message_vision ("$N��" + can->name() + "װ��" + attr["����"]+"��\n",me);
 
  if (me->is_fighting()) me->start_busy(2);
 
  can->set("Һ��/����",attr["����"]);
  can->set("Һ��/����",attr["����"]);
  can->set("Һ��/ʣ",can->query("����"));
  can->set("Һ��/ֹ��",attr["ֹ��"]);
 
  return 1;
}
 
int help()
{
        write(@HELP
ָ���ʽ : fill <��������>
 
ָ��˵�� :
        �������������������װ����Һ����װˮ��װ�Ƶȵ�,
        ��Ȼ������Ҫ��Һ�����װ���У���ˮ�ף�ˮ�أ�������ȡ�
HELP
    );
    return 1;
}
