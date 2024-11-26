import numpy as np
import matplotlib.pyplot as plt
from sklearn import datasets
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression
from matplotlib.colors import ListedColormap
# Data for plotting
x = np.linspace(0, 10, 500)  # More points for smoother curves
y1 = np.sin(x)
y2 = np.cos(x)

# Create a figure and axis
fig, ax = plt.subplots(figsize=(10, 6))

# Plotting both sine and cosine functions with different styles
ax.plot(x, y1, label='Sine Wave', color='magenta', linestyle='-', linewidth=2)
ax.plot(x, y2, label='Cosine Wave', color='cyan', linestyle='--', linewidth=2)

# Adding a title and labels with a custom font size
ax.set_xlabel('X-axis (0 to 10)', fontsize=12)
ax.set_ylabel('Y-axis (sin & cos)', fontsize=12)

# Adding gridlines and customizing them
ax.grid(True, linestyle=':', color='gray', alpha=0.5)

# Adding a legend
ax.legend(loc='upper right', fontsize=12)

# Adding annotations to highlight specific points
ax.annotate('Peak of Sine', xy=(np.pi/2, 1), xytext=(np.pi/2 + 1, 1.5),
            arrowprops=dict(facecolor='black', shrink=0.05),
            fontsize=12)

ax.annotate('Zero Cross of Cosine', xy=(np.pi, 0), xytext=(np.pi + 0.5, -0.5),
            arrowprops=dict(facecolor='black', shrink=0.05),
            fontsize=12)

# Setting the limits for both axes for better visualization
ax.set_xlim(0, 10)
ax.set_ylim(-1.5, 1.5)

# Display the plot
plt.show()

# Load the Iris dataset
iris = datasets.load_iris()
X = iris.data[:, :2]  # Use only the first two features (sepal length and sepal width)
y = iris.target

# Select only two classes for binary classification (class 0 and class 1)
X = X[y != 2]
y = y[y != 2]

# Split the dataset into training and test sets
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.3, random_state=42)

# Create a Logistic Regression classifier
clf = LogisticRegression(random_state=42)
clf.fit(X_train, y_train)

# Create a meshgrid for plotting the decision boundary
x_min, x_max = X[:, 0].min() - 1, X[:, 0].max() + 1
y_min, y_max = X[:, 1].min() - 1, X[:, 1].max() + 1
xx, yy = np.meshgrid(np.arange(x_min, x_max, 0.1),
                     np.arange(y_min, y_max, 0.1))

# Get predictions on the grid points
Z = clf.predict(np.c_[xx.ravel(), yy.ravel()])
Z = Z.reshape(xx.shape)

# Create the plot
fig, ax = plt.subplots(figsize=(10, 6))

# Define the colormap
cmap_background = ListedColormap(['#FFAAAA', '#AAAAFF'])

# Plot the decision boundary
ax.contourf(xx, yy, Z, alpha=0.3, cmap=cmap_background)

# Plot the data points
scatter = ax.scatter(X[:, 0], X[:, 1], c=y, cmap=ListedColormap(['#FF0000', '#0000FF']), edgecolors='k', s=50)

# Add title and labels
ax.set_title("Logistic Regression Decision Boundary")
ax.set_xlabel('Sepal Length (cm)')
ax.set_ylabel('Sepal Width (cm)')

# Add a legend
legend1 = ax.legend(*scatter.legend_elements(), title="Classes")
ax.add_artist(legend1)

# Show the plot
plt.show()
