// sleep.c
// ���ߣ����������̫�ã��Լ��趬��ʱ��
// by wade@Fantasy.Space 87/8/11

inherit F_CLEAN_UP;


int main ( object me, string arg )
{
  int t=0, d=0, h=0, m=0, s=0;

  if (!arg || arg == "") {
    return 0;
  }

  sscanf (arg, "%d %d %d %d", s, m, h, d);
  if (d < 0 || h < 0 || m < 0 || s < 0) {
    write ("ʱ��һ��Ҫ���ڡ�\n");
    return 1;
  }
  t = ((d * 24 + h) * 60 + m) * 60 + s;

  t += time();
  me->set("sleep",t);
  printf ("����ʱ��Ϊ��%d��%dСʱ%d��%d�롣\n�趨���ߵ� %s\n",
        d, h, m, s, ctime (t));
  me->do_command ("quit");
  return 1;
}

int help(object me)
{
  write(@HELP
ָ���ʽ : sleep �� �� ʱ ��
ָ��˵�� :
           ���ָ����ʹ�����趨һ��ʱ���ڲ������ߡ�
           ��/ʱ/��/�룬������С�ڡ𣬵�Ȼ������ʡ�Բ���
           ������һ��ʱ�䲻���ߣ�������־��������
           ��������Ͷ��ˡ�

   ** : �������ǿ���� "quit" :)
HELP
    );
    return 1;
}
