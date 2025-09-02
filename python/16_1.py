from kivy.app import App
from kivy.uix.button import Button
from kivy.uix.label import Label
from kivy.uix.boxlayout import BoxLayout

class SimpleApp(App):
    
    def build(self):
        self.count = 0  # Initialize the count
        # Create the layout
        layout = BoxLayout(orientation='vertical')
        # Create a label and add it to the layout
        self.label = Label(text=str(self.count), font_size=40)
        layout.add_widget(self.label)

        # Create a button, bind it to the on_button_press function, and add it to the layout
        button = Button(text="Increate by 1", size_hint=(1, 0.3),background_normal='',
                        background_color=(0, 0.7, 0.3, 1), font_size=30)
        button.bind(on_press=self.on_button_press)
        layout.add_widget(button)
        return layout
    def on_button_press(self, instance):
        self.count += 1  # Increase count
        self.label.text = str(self.count)  # Update label

# Run the app
if __name__ == '__main__':
    SimpleApp().run()
