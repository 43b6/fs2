// edit.c

varargs int edit(function callback, string text)
{
	write("�����뿪�� '.'��ȡ�������� '~q'��ʹ���ڽ��б༭���� '~e'��\n");
	write("����������������������������������������������������������\n");
	if (!text) input_to("input_line", "", callback);
	else {
	  write (text);
	  input_to("input_line", text, callback);
	}
	return 1;
}

void input_line(string line, string text, function callback)
{
	if( line=="." ) {
		(*callback)(text);
		return;
	} else if( line=="~q" ) {
		write("����ȡ����\n");
		return;
	} else if( line=="~e" ) {
	} else
		text += line + "\n";
	input_to("input_line", text, callback);
}
