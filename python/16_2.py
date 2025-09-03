from kivy.app import App
from kivy.uix.boxlayout import BoxLayout
from kivy.uix.label import Label
from kivy.uix.textinput import TextInput
from kivy.uix.button import Button
class LoginApp(App):
    def build(self):
        
        layout = BoxLayout(orientation='vertical', padding=10, spacing=10)
        self.user_input = TextInput(multiline=True)
        layout.add_widget(self.user_input)
        self.login_button = Button(text="Click To show the message!!!",background_normal='',
                        background_color=(1, 0, 1, 1))
        self.login_button.bind(on_press=self.make_operation)
        layout.add_widget(self.login_button)
        self.status_label = Label(text="")
        layout.add_widget(self.status_label)
        return layout
    def make_operation(self, instance):
        username = self.user_input.text
        if(username !="") :
            self.status_label.text = username
            self.status_label.color = (0, 1, 0, 1)  
        else :
            self.status_label.text = "Please enter the Text."
            self.status_label.color = (1, 0, 0, 1)     
if __name__ == '__main__':
    LoginApp().run()
